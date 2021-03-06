// Copyright (c) 2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SIDECHAINACTIVATIONDIALOG_H
#define SIDECHAINACTIVATIONDIALOG_H

#include <QDialog>

class PlatformStyle;
class SidechainActivationTableModel;
class SidechainEscrowTableModel;

namespace Ui {
class SidechainActivationDialog;
}

class SidechainActivationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SidechainActivationDialog(const PlatformStyle *platformStyle, QWidget *parent = nullptr);
    ~SidechainActivationDialog();

public Q_SLOTS:
    void on_pushButtonActivate_clicked();

    void on_pushButtonReject_clicked();

    void on_pushButtonHelp_clicked();

    void on_pushButtonCreate_clicked();

private:
    Ui::SidechainActivationDialog *ui;

    SidechainActivationTableModel *activationModel = nullptr;
    SidechainEscrowTableModel *escrowModel = nullptr;

    const PlatformStyle *platformStyle;
};

#endif // SIDECHAINACTIVATIONDIALOG_H
