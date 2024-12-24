import QtQuick
import Felgo
import QtQuick.Controls
import QtQuick.Layouts
Page {
    signal buttonNextStep();
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
        color: "#FFE9CA"
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
        Column{
            anchors.top:header.bottom
            anchors.left:parent.left
            anchors.right:parent.right
            spacing:20
            padding:20
            Text{
                text:"Добавить вышивку"
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 16
                font.bold:true
            }
            Rectangle{
                width:200
                height:200
                color:"darkgray"
                border.color: "black"
                border.width: 2
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Row{
                anchors.horizontalCenter: parent.horizontalCenter
                spacing:20
                DefButton{
                    id:upload
                    height:30
                    width:160
                    buttext: "Загрузить с устройства"
                }
                DefButton{
                    id:photo
                    width:50
                    height:30
                    Image {
                        anchors.centerIn: parent
                        source: "qrc:/assets/photoic.png" // Укажите путь к изображению лупы
                        anchors.verticalCenter: findField.verticalCenter
                        anchors.right:maintext.right
                        height:parent.height
                        width:parent.width-20
                    }
                }
            }
            Rectangle{
                id:workColor
                height:40
                width:230
                radius:10
                anchors.horizontalCenter: parent.horizontalCenter
                color:"#F5C66E"
                states:[
                    State {
                        name: "colored"
                        PropertyChanges {target: colortype; color:"#EF9A40"}
                        PropertyChanges {target:graytype; color:"#EDB477"}
                    },
                    State {
                        name: "gray"
                        PropertyChanges {target: colortype; color:"#EDB477"}
                        PropertyChanges {target:graytype; color:"#EF9A40"}
                    },
                    State {
                        name: "nothing"
                        PropertyChanges {target: colortype; color:"#EDB477"}
                        PropertyChanges {target:graytype; color:"#EDB477"}
                    }]
                state:"nothing"
                Row{
                    anchors.fill:parent
                    padding: 5
                    spacing:20
                Rectangle{
                    id:colortype
                    width:100
                    height:30
                    border.color: "black"
                    border.width: 1
                    Text{
                        anchors.centerIn:parent
                        font.bold: true
                        color:"white"
                        text:"Цветное"

                    }
                    radius:10
                    MouseArea{
                        anchors.fill:parent
                        onClicked: {
                            workColor.state="colored"
                        }
                    }
                }
                Rectangle{
                    id:graytype
                    width:100
                    height:30
                    border.color: "black"
                    border.width: 1
                    Text{
                        anchors.centerIn:parent
                        font.bold: true
                        color:"white"
                        text:"Однотонное"

                    }
                    radius:10
                    MouseArea{
                        anchors.fill:parent
                        onClicked: {
                            workColor.state="gray"
                        }
                    }
                }
                }
            }
            Text{
                text:"Разрешение"
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 13
                font.bold:true
            }
            Rectangle{
                color:"#F5C66E"
                radius:10
                width: 230
                height: 30
                anchors.horizontalCenter: parent.horizontalCenter
            Slider {
                id: control
                anchors.horizontalCenter: parent.horizontalCenter
                width: parent.width-20
                height: 30
                from: 0
                to: 100
                stepSize: 1
                value:50
                // Здесь кастомизируем поле ползунка
                background: Rectangle {
                    x: control.leftPadding
                    y: control.topPadding + control.availableHeight/ 2 - height / 2
                    implicitWidth: 200
                    implicitHeight: 10
                    width: control.availableWidth
                    height: implicitHeight
                    radius: 2
                    Rectangle {
                        width: control.visualPosition * parent.width
                        height: parent.height
                        color: "#E77F00"
                        radius: 2
                    }
                }
                // Здесь кастомизируем сам ползунок
                handle: Rectangle {
                    x: control.leftPadding + control.visualPosition * (control.availableWidth - width)
                    y: control.topPadding + control.availableHeight/ 2 - height / 2
                    implicitWidth: 22
                    implicitHeight: 22
                    radius: 11
                    color: control.pressed ? "#E6BE00" : "#F6BF08"
                    border.color: "black"
                }
            }
            }
            DefButton{
                id:next
                width:230
                height:30
                buttext: "Продолжить"
                anchors.topMargin: 100
                anchors.horizontalCenter: parent.horizontalCenter
                onButtonClicked: {
                    root.buttonNextStep()
                }
            }
            PageIndicator {
                id: indicator
                count: 3
                currentIndex: 0
                anchors.horizontalCenter: parent.horizontalCenter
            }


        }

    }
    }

}
