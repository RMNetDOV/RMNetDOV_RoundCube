<?php

/*
 +-----------------------------------------------------------------------+
 | Localization file of the Roundcube Webmail Password plugin            |
 |                                                                       |
 | Copyright (C) The Roundcube Dev Team                                  |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/plugin-password/
*/

$labels['changepasswd']  = 'Parola değiştirme';
$labels['curpasswd']  = 'Geçerli parola:';
$labels['newpasswd']  = 'Yeni parola:';
$labels['confpasswd']  = 'Yeni parola onayı:';
$messages['nopassword'] = 'Yeni parolayı yazın.';
$messages['nocurpassword'] = 'Geçerli parolayı yazın.';
$messages['passwordincorrect'] = 'Geçerli parolayı yanlış yazdınız.';
$messages['passwordinconsistency'] = 'Parola ile onayı aynı değil. Lütfen yeniden deneyin.';
$messages['crypterror'] = 'Yeni parola kaydedilemedi. Şifreleme işlevi bulunamadı.';
$messages['connecterror'] = 'Yeni parola kaydedilemedi. Bağlantı sorunu.';
$messages['internalerror'] = 'Yeni parola kaydedilemedi.';
$messages['passwordshort'] = 'Parola en az $length karakterden oluşmalı.';
$messages['passwordweak'] = 'Parola en az bir sayı ve bir noktalama işareti içermeli.';
$messages['passwordtooweak'] = 'Parola çok kolay.';
$messages['passwordnoseq'] = 'Parola 123456 ya da QWERTY gibi sıralamalardan oluşmamalıdır.';
$messages['passwordnocommon'] = 'Parola iyi bilinen bir sözcük ya da ad olmamalıdır.';
$messages['passwordforbidden'] = 'Parolada izin verilmeyen karakterler var.';
$messages['firstloginchange'] = 'İlk kez oturum açıyorsunuz. Parolanızı değiştirin.';
$messages['disablednotice'] = 'Sistem bakımda olduğundan parola değiştirilemez. Lütfen daha sonra yeniden deneyin. Verdiğimiz rahatsızlıktan dolayı özür dileriz.';
$messages['passwinhistory'] = 'Bu parola daha önce kullanılmış.';
$messages['samepasswd'] = 'Yeni parola eski paroladan farklı olmalıdır.';
$messages['passwdexpirewarning'] = 'Uyarı! Parolanızın kullanma süresi yakında dolacak. $expirationdatetime tarihinden önce değiştirin.';
$messages['passwdexpired'] = 'Parolanızın kullanma süresi dolmuş. Şimdi değiştirmelisiniz!';
$messages['passwdconstraintviolation'] = 'Parola istenilen karmaşıklıkta değil. Büyük olasılıkla oldukça kolay.';
$messages['pwned_mustnotbedisclosed'] = 'Parola <a href="$href" target="_blank">yaygın kullanılmıyor olmalı</a>.';
$messages['pwned_isdisclosed'] = 'Bu parola yaygın olarak kullanılıyor.';
$messages['pwned_fetcherror'] = 'Parola zorluğu denetlenemedi.';
