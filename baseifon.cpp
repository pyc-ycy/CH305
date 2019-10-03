#include "baseifon.h"

BaseIfon::BaseIfon(QWidget *parent) : QWidget(parent)
{
    /****左侧****/
        UserNameLabel = new QLabel(tr("用户名："));
        UserNameLineEdit = new QLineEdit;
        NameLabel = new QLabel(tr("姓名："));
        NameLineEdit = new QLineEdit;
        SexLabel = new QLabel(tr("性别："));
        SexComboBox = new QComboBox;
        SexComboBox->addItem(tr("女"));
        SexComboBox->addItem(tr("男"));
        DepartmentLabel = new QLabel(tr("部门："));
        DepartmentTextEdit = new QTextEdit;
        AgeLabel = new QLabel(tr("年龄："));
        AgeLineEdit = new QLineEdit;
        OtherLabel = new QLabel(tr("备注："));
        OtherLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
        leftLayout = new QGridLayout();
        leftLayout->addWidget(UserNameLabel, 0, 0);
        leftLayout->addWidget(UserNameLineEdit, 0, 1);
        leftLayout->addWidget(NameLabel, 1, 0);
        leftLayout->addWidget(NameLineEdit, 1, 1);
        leftLayout->addWidget(SexLabel, 2, 0);
        leftLayout->addWidget(SexComboBox, 2, 1);
        leftLayout->addWidget(DepartmentLabel, 3, 0);
        leftLayout->addWidget(DepartmentTextEdit, 3, 1);
        leftLayout->addWidget(AgeLabel, 4, 0);
        leftLayout->addWidget(AgeLineEdit, 4, 1);
        leftLayout->addWidget(OtherLabel, 5, 0, 1, 2);
        leftLayout->setColumnStretch(0, 1);
        leftLayout->setColumnStretch(1, 3);
        /********右侧******/
        HeadLabel = new QLabel(tr("头像："));
        HeadIconLabel = new QLabel;
        QPixmap icon(":/new/prefix1/Python2.ico");
        HeadIconLabel->setPixmap(icon);
        HeadIconLabel->resize(icon.width(), icon.height());
        UpdateHeadBtn = new QPushButton(tr("更新"));
        // 完成右上侧头像选择区的布局
        TopRightLayout = new QHBoxLayout();
        TopRightLayout->setSpacing(20);
        TopRightLayout->addWidget(HeadLabel);
        TopRightLayout->addWidget(HeadIconLabel);
        TopRightLayout->addWidget(UpdateHeadBtn);
        IntroductionLabel = new QLabel(tr("个人说明："));
        IntroductionTextEdit = new QTextEdit;
        // 右侧的布局
        RightLayout = new QVBoxLayout();
        RightLayout->setMargin(10);
        RightLayout->addLayout(TopRightLayout);
        RightLayout->addWidget(IntroductionLabel);
        RightLayout->addWidget(IntroductionTextEdit);
        /*******底部******/
        OkBtn = new QPushButton(tr("确定"));
        CancelBtn = new QPushButton(tr("取消"));
        ButtomLayout = new QHBoxLayout();
        ButtomLayout->addStretch();
        ButtomLayout->addWidget(OkBtn);
        ButtomLayout->addWidget(CancelBtn);
        /*-----------------mainLayout--------------*/
        QGridLayout *mainLayout = new QGridLayout(this);
        mainLayout->setMargin(15);
        mainLayout->setSpacing(10);
        mainLayout->addLayout(leftLayout, 0, 0);
        mainLayout->addLayout(RightLayout, 0, 1);
        mainLayout->addLayout(ButtomLayout, 1, 0, 1, 2);
        mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}
