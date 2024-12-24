import QtQuick
import Felgo
import QtQuick.Controls
import QtQuick.Layouts
Page {
    signal buttonBack();
    property alias menudraw:drawer
    id:root
    width: parent.width
    height: parent.height
    MenuDrawer{
        id:drawer
    }
    ColumnLayout{
    anchors.fill: parent
    Rectangle {
        anchors.fill: parent
        color: "white"
        Item {
            anchors.top:header.bottom
            anchors.bottom:changemenu.top
            Rectangle {
                    width: 4000
                    height: 4000
                    color: "white" // Белый фон
                    Drag.active: dragArea.drag.active
                    Drag.hotSpot.x: -500
                    Drag.hotSpot.y: -500
                    Canvas {
                        id: gridCanvas
                        anchors.fill: parent

                        onPaint: {
                            var ctx = gridCanvas.getContext("2d");
                            ctx.clearRect(0, 0, gridCanvas.width, gridCanvas.height); // Очистка канваса

                            ctx.strokeStyle = "black"; // Цвет линий
                            ctx.lineWidth = 1; // Толщина линий

                            // Рисуем вертикальные линии
                            for (var x = 0; x < gridCanvas.width; x += 20) {
                                ctx.beginPath();
                                ctx.moveTo(x, 0);
                                ctx.lineTo(x, gridCanvas.height);
                                ctx.stroke();
                            }

                            // Рисуем горизонтальные линии
                            for (var y = 0; y < gridCanvas.height; y += 20) {
                                ctx.beginPath();
                                ctx.moveTo(0, y);
                                ctx.lineTo(gridCanvas.width, y);
                                ctx.stroke();
                            }
                        }

                        Component.onCompleted: {
                            gridCanvas.requestPaint(); // Запрос на перерисовку канваса
                        }
                    }
                MouseArea {
                    id: dragArea
                    anchors.fill: parent

                    drag.target: parent
                }
            }
        }
        Rectangle{
            id:header
            anchors.left: parent.left
            anchors.right:parent.right
            anchors.top:parent.top
            height:50
            color:"#F2B83C"
            MouseArea{
                height:parent.height
                width:parent.width
                anchors.left:parent.left
                Rectangle{
                    anchors.topMargin: 2
                    radius:20
                    color:"white"
                    width:parent.height
                    height:10
                    anchors.top:parent.top
                }
                Rectangle{
                    radius:20
                    color:"white"
                    width:parent.height
                    height:10
                    anchors.verticalCenter:parent.verticalCenter
                }
                Rectangle{
                    radius:20
                    color:"white"
                    width:parent.height
                    height:10
                    anchors.bottom:parent.bottom
                    anchors.bottomMargin: 2
                }
                onClicked: drawer.open()  // Открывает меню при нажатии
            }
            Image {
                source: "qrc:/assets/logo.png" // Укажите путь к изображению лупы
                width: parent.height
                height: parent.height
                anchors.right: parent.right
            }
        }
        Rectangle{
            id:changemenu
            anchors.left: parent.left
            anchors.right:parent.right
            anchors.bottom:parent.bottom
            height:60
            color:"#F5C66E"
            Row{
                anchors.fill:parent
                spacing:30
                rightPadding: 30
                leftPadding: 30
                DefButton{
                    width:50
                    height:50
                    buttext: "Сохранить"
                    textsize:10
                    maincolor: "#F6A636"
                    anchors.verticalCenter: parent.verticalCenter
                }
                DefButton{
                    width:50
                    height:50
                    buttext: "<-"
                    textsize:16
                    maincolor: "#F6A636"
                    anchors.verticalCenter: parent.verticalCenter
                }
                DefButton{
                    width:50
                    height:50
                    buttext: "->"
                    textsize:16
                    maincolor: "#F6A636"
                    anchors.verticalCenter: parent.verticalCenter
                }
                DefButton{
                    id:back
                    width:50
                    height:50
                    buttext: "Назад"
                    textsize:10
                    maincolor: "#F6A636"
                    anchors.verticalCenter: parent.verticalCenter
                    onButtonClicked: {
                        root.buttonBack()
                    }
                }
            }
        }

    }
    }

}
