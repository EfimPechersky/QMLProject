import QtQuick
import Felgo

Rectangle{
    height:190
    width:170
    radius:20
    color:"red"
    id:obj
    signal buttonClicked()
    Rectangle{
        radius:20
        anchors.bottom: parent.bottom
        anchors.left:parent.left
        anchors.right:parent.right
        height:50
        color:"#FFFFFF"
        Text{
            text:"Красный квадрат"
            anchors.bottom:parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Text{
            text:"Пользователь"
            color:"gray"
            anchors.top:parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
    MouseArea{
        anchors.fill:parent
        onClicked: {
            obj.buttonClicked()
        }
    }
}
