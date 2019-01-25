// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CLARITY_QT_CLARITYADDRESSVALIDATOR_H
#define CLARITY_QT_CLARITYADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ClarityAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ClarityAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Clarity address widget validator, checks for a valid clarity address.
 */
class ClarityAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ClarityAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // CLARITY_QT_CLARITYADDRESSVALIDATOR_H
