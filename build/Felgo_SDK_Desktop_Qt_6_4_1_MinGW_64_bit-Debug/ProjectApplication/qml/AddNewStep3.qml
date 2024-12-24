import QtQuick
import Felgo
import QtQuick.Controls
import QtQuick.Layouts
Page {
    signal buttonToVushClicked();
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
            TextField {
                id: worknameField
                width:200
                placeholderText: "Название"
                font.pixelSize: 16
                anchors.horizontalCenter: parent.horizontalCenter
                background: Rectangle {
                                color: "white"
                                radius: 20  // Задаем радиус скругления углов
                                border.color: "gray"
                                border.width: 1
                            }
            }
            Rectangle{
                width:200
                height:200
                color:"darkgray"
                border.color: "black"
                border.width: 2
                anchors.horizontalCenter: parent.horizontalCenter
            }

            DefButton{
                id:next
                width:230
                height:30
                buttext: "Продолжить"
                anchors.topMargin: 100
                anchors.horizontalCenter: parent.horizontalCenter
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
