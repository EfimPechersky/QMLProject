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
                height:300
                color:"white"
                border.color: "black"
                border.width: 2
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Rectangle{
                color:"#FFDB99"
                width:230
                height:50
                radius:10
                anchors.horizontalCenter: parent.horizontalCenter
                Row{
                    anchors.fill:parent
                    spacing:20
                    padding:20
                    DefButton{
                        width:30
                        height:30
                        buttext: "#"
                        maincolor:"#F6A636"
                        anchors.verticalCenter:parent.verticalCenter
                    }
                    DefButton{
                        width:30
                        height:30
                        buttext: "+"
                        maincolor:"#F6A636"
                        anchors.verticalCenter:parent.verticalCenter
                    }
                    DefButton{
                        width:30
                        height:30
                        buttext: "<>"
                        maincolor:"#F6A636"
                        anchors.verticalCenter:parent.verticalCenter
                    }
                    DefButton{
                        width:30
                        height:30
                        buttext: "[]"
                        maincolor:"#F6A636"
                        anchors.verticalCenter:parent.verticalCenter
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
                currentIndex: 1
                anchors.horizontalCenter: parent.horizontalCenter
            }


        }

    }
    }

}
