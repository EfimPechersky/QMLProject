import QtQuick
import Felgo
import QtQuick.Controls
import QtQuick.Layouts
Page {
    signal buttonToVushClicked();
    property alias menudraw:drawer
    id:root
    width: parent.width
    height: parent.height
    MenuDrawer{
        id:drawer
    }
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
            ScrollView{
                anchors.top: header.bottom
                anchors.left:parent.left
                anchors.right:parent.right
                anchors.bottom:parent.bottom
                contentHeight:800
                Column{
                    anchors.fill: parent
            Text {
                id:maintext
                text: "Работы пользователей"
                font.bold: true
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.topMargin: 20
                font.pointSize: 20
            }
            TextField {
                id: findField
                width:250
                placeholderText: "Поиск"
                font.pixelSize: 16
                anchors.top: maintext.bottom
                anchors.topMargin: 20
                anchors.left: maintext.left
                background: Rectangle {
                                color: "white"
                                radius: 20  // Задаем радиус скругления углов
                                border.color: "gray"
                                border.width: 1
                            }
            }
            Image {
                source: "qrc:/assets/search.png" // Укажите путь к изображению лупы
                anchors.verticalCenter: findField.verticalCenter
                anchors.right:maintext.right
                height:30
                width:30
            }


            GridLayout {
                anchors.top:findField.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.topMargin: 20
                id: gridlay
                rows: 3
                columns: 2
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    id:ld
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
            }
            Text{
                text: "< 1 2 3 4 5 6 ... >"
                font.bold: true
                anchors.top: gridlay.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                font.pointSize: 20
            }
        }

        }
    }

}


