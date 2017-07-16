<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>OverviewPage</class>
 <widget class="QWidget" name="OverviewPage">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>753</width>
    <height>710</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>Form</string>
  </property>
  <layout class="QVBoxLayout" name="topLayout">
   <item>
    <widget class="QLabel" name="labelAlerts">
     <property name="visible">
      <bool>false</bool>
     </property>
     <property name="styleSheet">
      <string notr="true">background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488);  color:#000000
</string>
     </property>
     <property name="wordWrap">
      <bool>true</bool>
     </property>
     <property name="margin">
      <number>3</number>
     </property>
    </widget>
   </item>
   <item>
    <layout class="QHBoxLayout" name="horizontalLayout" stretch="1,1">
     <item>
      <layout class="QVBoxLayout" name="verticalLayout_2">
       <item>
        <widget class="QWidget" name="widget" native="true">
         <property name="styleSheet">
          <string notr="true">background-color: rgba(47, 204 , 244, 100);</string>
         </property>
         <layout class="QVBoxLayout" name="verticalLayout_4">
          <item>
           <layout class="QHBoxLayout" name="horizontalLayout_4">
            <item>
             <widget class="QLabel" name="label_5">
              <property name="font">
               <font>
                <pointsize>11</pointsize>
                <weight>75</weight>
                <bold>true</bold>
               </font>
              </property>
              <property name="styleSheet">
               <string notr="true"> background: transparent;
color: rgb(197,241,234);</string>
              </property>
              <property name="text">
               <string>Wallet</string>
              </property>
             </widget>
            </item>
            <item>
             <widget class="QLabel" name="labelWalletStatus">
              <property name="toolTip">
               <string>The displayed information may be out of date. Your wallet automatically synchronizes with the Growers network after a connection is established, but this process has not completed yet.</string>
              </property>
              <property name="styleSheet">
               <string notr="true">QLabel { color: red;  background: transparent;}</string>
              </property>
              <property name="text">
               <string notr="true">(out of sync)</string>
              </property>
              <property name="alignment">
               <set>Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter</set>
              </property>
             </widget>
            </item>
            <item>
             <spacer name="horizontalSpacer_2">
              <property name="orientation">
               <enum>Qt::Horizontal</enum>
              </property>
              <property name="sizeHint" stdset="0">
               <size>
                <width>40</width>
                <height>20</height>
               </size>
              </property>
             </spacer>
            </item>
           </layout>
          </item>
          <item>
           <layout class="QFormLayout" name="formLayout_2">
            <property name="fieldGrowthPolicy">
             <enum>QFormLayout::AllNonFixedFieldsGrow</enum>
            </property>
            <property name="horizontalSpacing">
             <number>12</number>
            </property>
            <property name="verticalSpacing">
             <number>12</number>
            </property>
            <item row="0" column="0">
             <widget class="QLabel" name="label">
              <property name="styleSheet">
               <string notr="true"> background: transparent;
color: rgb(255, 255, 255);</string>
              </property>
              <property name="text">
               <string>Spendable:</string>
              </property>
             </widget>
            </item>
            <item row="0" column="1">
             <widget class="QLabel" name="labelBalance">
              <property name="font">
               <font>
                <weight>75</weight>
                <bold>true</bold>
               </font>
              </property>
              <property name="cursor">
               <cursorShape>IBeamCursor</cursorShape>
              </property>
              <property name="toolTip">
               <string>Your current spendable balance</string>
              </property>
              <property name="styleSheet">
               <string notr="true">QLabel { color: rgb(255, 255, 255); background: transparent; }</string>
              </property>
              <property name="text">
               <string notr="true">0 NPK</string>
              </property>
              <property name="alignment">
               <set>Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter</set>
              </property>
              <property name="textInteractionFlags">
               <set>Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse</set>
              </property>
             </widget>
            </item>
            <item row="1" column="0">
             <widget class="QLabel" name="label_6">
              <property name="styleSheet">
               <string notr="true"> background: transparent;
color: rgb(255, 255, 255);</string>
              </property>
              <property name="text">
               <string>Stake:</string>
              </property>
             </widget>
            </item>
            <item row="1" column="1">
             <widget class="QLabel" name="labelStake">
              <property name="font">
               <font>
                <weight>75</weight>
                <bold>true</bold>
               </font>
              </property>
              <property name="cursor">
               <cursorShape>IBeamCursor</cursorShape>
              </property>
              <property name="toolTip">
               <string>Total of coins that was staked, and do not yet count toward the current balance</string>
              </property>
              <property name="styleSheet">
               <string notr="true">QLabel { color: rgb(255, 255, 255); background: transparent; }</string>
              </property>
              <property name="text">
               <string notr="true">0 NPK</string>
              </property>
              <property name="alignment">
               <set>Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter</set>
              </property>
              <property name="textInteractionFlags">
               <set>Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse</set>
              </property>
             </widget>
            </item>
            <item row="2" column="0">
             <widget class="QLabel" name="label_3">
              <property name="styleSheet">
               <string notr="true"> background: transparent;
color: rgb(255, 255, 255);</string>
              </property>
              <property name="text">
               <string>Unconfirmed:</string>
              </property>
             </widget>
            </item>
            <item row="3" column="0">
             <widget class="QLabel" name="labelImmatureText">
              <property name="styleSheet">
               <string notr="true"> background: transparent;
color: rgb(255, 255, 255);</string>
              </property>
              <property name="text">
               <string>Immature:</string>
              </property>
             </widget>
            </item>
            <item row="3" column="1">
             <widget class="QLabel" name="labelImmature">
              <property name="font">
               <font>
                <weight>75</weight>
                <bold>true</bold>
               </font>
              </property>
              <property name="toolTip">
               <string>Mined balance that has not yet matured</string>
              </property>
              <property name="styleSheet">
               <string notr="true">QLabel { color: rgb(255, 255, 255); background: transparent; }</string>
              </property>
              <property name="text">
               <string notr="true">0 NPK</string>
              </property>
              <property name="alignment">
               <set>Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter</set>
              </property>
              <property name="textInteractionFlags">
               <set>Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse</set>
              </property>
             </widget>
            </item>
            <item row="4" column="0" colspan="2">
             <widget class="Line" name="line">
              <property name="orientation">
               <enum>Qt::Horizontal</enum>
              </property>
             </widget>
            </item>
            <item row="5" column="0">
             <widget class="QLabel" name="labelTotalText">
              <property name="styleSheet">
               <string notr="true"> background: transparent;
color: rgb(255, 255, 255);</string>
              </property>
              <property name="text">
               <string>Total:</string>
              </property>
             </widget>
            </item>
            <item row="5" column="1">
             <widget class="QLabel" name="labelTotal">
              <property name="font">
               <font>
                <weight>75</weight>
                <bold>true</bold>
               </font>
              </property>
              <property name="cursor">
               <cursorShape>IBeamCursor</cursorShape>
              </property>
              <property name="toolTip">
               <string>Your current total balance</string>
              </property>
              <property name="styleSheet">
               <string notr="true">QLabel { color: rgb(255, 255, 255); background: transparent; }</string>
              </property>
              <property name="text">
               <string notr="true">0 NPK</string>
              </property>
              <property name="alignment">
               <set>Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter</set>
              </property>
              <property name="textInteractionFlags">
               <set>Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse</set>
              </property>
             </widget>
            </item>
            <item row="2" column="1">
             <widget class="QLabel" name="labelUnconfirmed">
              <property name="font">
               <font>
                <weight>75</weight>
                <bold>true</bold>
               </font>
              </property>
              <property name="cursor">
               <cursorShape>IBeamCursor</cursorShape>
              </property>
              <property name="toolTip">
               <string>Total of transactions that have yet to be confirmed, and do not yet count toward the current balance</string>
              </property>
              <property name="styleSheet">
               <string notr="true">QLabel { color: rgb(255, 255, 255); background: transparent; }</string>
              </property>
              <property name="text">
               <string notr="true">0 NPK</string>
              </property>
              <property name="alignment">
               <set>Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter</set>
              </property>
              <property name="textInteractionFlags">
               <set>Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse</set>
              </property>
             </widget>
            </item>
           </layout>
          </item>
         </layout>
        </widget>
       </item>
       <item>
        <spacer name="verticalSpacer">
         <property name="orientation">
          <enum>Qt::Vertical</enum>
         </property>
         <property name="sizeHint" stdset="0">
          <size>
           <width>20</width>
           <height>40</height>
          </size>
         </property>
        </spacer>
       </item>
       <item alignment="Qt::AlignHCenter">
        <widget class="QWebView" name="webView_2">
         <property name="minimumSize">
          <size>
           <width>480</width>
           <height>500</height>
          </size>
         </property>
         <property name="maximumSize">
          <size>
           <width>480</width>
           <height>500</height>
          </size>
         </property>
         <property name="styleSheet">
          <string notr="true"> background: transparent;</string>
         </property>
         <property name="url">
          <url>
           <string>http://www.cryptogrowers.com/twitterfeed.html</string>
          </url>
         </property>
        </widget>
       </item>
      </layout>
     </item>
     <item>
      <layout class="QVBoxLayout" name="verticalLayout_3">
       <item>
        <widget class="QWidget" name="widget_2" native="true">
         <property name="styleSheet">
          <string notr="true">background-color: rgba(1, 124, 182,100);</string>
         </property>
         <layout class="QVBoxLayout" name="verticalLayout">
          <item>
           <layout class="QHBoxLayout" name="horizontalLayout_2">
            <item>
             <widget class="QLabel" name="label_4">
              <property name="font">
               <font>
                <pointsize>11</pointsize>
                <weight>75</weight>
                <bold>true</bold>
               </font>
              </property>
              <property name="styleSheet">
               <string notr="true"> background: transparent;
color: rgb(197,241,234);</string>
              </property>
              <property name="text">
               <string>&lt;b&gt;Recent transactions&lt;/b&gt;</string>
              </property>
             </widget>
            </item>
            <item>
             <widget class="QLabel" name="labelTransactionsStatus">
              <property name="toolTip">
               <string>The displayed information may be out of date. Your wallet automatically synchronizes with the Growers network after a connection is established, but this process has not completed yet.</string>
              </property>
              <property name="styleSheet">
               <string notr="true">QLabel { color: red;  background: transparent;}</string>
              </property>
              <property name="text">
               <string notr="true">(out of sync)</string>
              </property>
              <property name="alignment">
               <set>Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter</set>
              </property>
             </widget>
            </item>
            <item>
             <spacer name="horizontalSpacer">
              <property name="orientation">
               <enum>Qt::Horizontal</enum>
              </property>
              <property name="sizeHint" stdset="0">
               <size>
                <width>40</width>
                <height>20</height>
               </size>
              </property>
             </spacer>
            </item>
           </layout>
          </item>
          <item>
           <widget class="QListView" name="listTransactions">
            <property name="styleSheet">
             <string notr="true">QListView { background: transparent; }</string>
            </property>
            <property name="frameShape">
             <enum>QFrame::NoFrame</enum>
            </property>
            <property name="verticalScrollBarPolicy">
             <enum>Qt::ScrollBarAlwaysOff</enum>
            </property>
            <property name="horizontalScrollBarPolicy">
             <enum>Qt::ScrollBarAlwaysOff</enum>
            </property>
            <property name="selectionMode">
             <enum>QAbstractItemView::NoSelection</enum>
            </property>
           </widget>
          </item>
         </layout>
        </widget>
       </item>
       <item>
        <widget class="QWebView" name="webView">
         <property name="minimumSize">
          <size>
           <width>0</width>
           <height>220</height>
          </size>
         </property>
         <property name="maximumSize">
          <size>
           <width>16777215</width>
           <height>220</height>
          </size>
         </property>
         <property name="styleSheet">
          <string notr="true"> background: transparent;</string>
         </property>
         <property name="url">
          <url>
           <string>http://www.cryptogrowers.com/adspace.html</string>
          </url>
         </property>
        </widget>
       </item>
      </layout>
     </item>
    </layout>
   </item>
  </layout>
 </widget>
 <customwidgets>
  <customwidget>
   <class>QWebView</class>
   <extends>QWidget</extends>
   <header>QtWebKitWidgets/QWebView</header>
  </customwidget>
 </customwidgets>
 <resources/>
 <connections/>
</ui>
