/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QGraphicsView>
#include <QTime>
#include <QTimer>

#include "settings.h"

class QGraphicsScene;
class QGraphicsLinearLayout;
class QResizeEvent;
class Label;
class Menu;
class BackgroundItem;
class TopBar;

class MainView : public QGraphicsView {
	
Q_OBJECT
	
public:
    MainView(const bool enableOpenGL, const bool outputFps, const bool imageBasedRendering = false, QWidget *parent = 0);
    ~MainView();

    void setTestWidget(QGraphicsWidget *testWidget);
    QGraphicsWidget *takeTestWidget();
    QGraphicsWidget *testWidget();

    qreal fps();
    void fpsReset();
    void setImageBasedRendering(const bool imageBasedRendering);
    bool imageBasedRendering() const;
    Menu *menu();
    int rotationAngle() const;

signals:
    void repainted();

public slots:
    void rotateContent(int angle);

protected:

    virtual void resizeEvent(QResizeEvent * event);
    virtual void paintEvent(QPaintEvent *event);
    virtual void keyPressEvent(QKeyEvent *event);
    virtual void wheelEvent(QWheelEvent *event) { Q_UNUSED (event); };

private slots:
    void updateFps();

private:
    void construct();
    void resizeContent(const QSize &s);
		
private:
    Q_DISABLE_COPY(MainView)

    QGraphicsScene *m_scene;
    QGraphicsLinearLayout *m_mainLayout;
    QGraphicsWidget *m_mainWidget;
    QGraphicsWidget *m_testWidget;
    Menu* m_menu;
    BackgroundItem* m_backGround;
    TopBar* m_topBar;

    bool m_imageBasedRendering;
    QPixmap *m_pixmapToRender;
    // Used for FPS
    int m_frameCount;
    QTime m_fpsFirstTs;
    QTime m_fpsLatestTs;
    bool m_OutputFps;
    QTime m_fpsUpdated;
    QList<qreal> m_Fpss;

    int m_angle;
    bool m_enableOpenGL;
};

#endif //__MAINWINDOW_H__
