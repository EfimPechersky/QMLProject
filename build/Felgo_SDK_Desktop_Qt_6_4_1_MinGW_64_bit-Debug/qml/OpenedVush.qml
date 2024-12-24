import QtQuick
import Felgo
import QtQuick.Controls
import QtQuick.Layouts
Page {
    signal buttonChangeWork();
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
        Column{
            anchors.top:header.bottom
            anchors.left:parent.left
            anchors.right:parent.right
            spacing:20
            padding:20
            Text{
                text:"Красный квадрат"
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 16
                font.bold:true
            }
            Text{
                text:"Пользователь"
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 16
            }
            Rectangle{
                width:250
                height:250
                color:"red"
                anchors.horizontalCenter: parent.horizontalCenter
                radius:10
            }
            Text{
                id:process
                text:"Завершено на 33%"
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 16
            }
            DefButton{
                id:cont
                width:250
                height:30
                anchors.horizontalCenter: parent.horizontalCenter
                buttext: "Продолжить"
                onButtonClicked: {
                    root.buttonChangeWork()
                }
            }
            DefButton{
                id:reset
                width:250
                height:30
                //anchors.top:cont.bottom
                //anchors.topMargin: 100
                anchors.horizontalCenter: parent.horizontalCenter
                buttext: "Заново"
                onButtonClicked: {
                    root.buttonChangeWork()
                }
            }
        }

    }

}
