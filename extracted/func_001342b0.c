void func_001342b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001342b0: addiu $sp, $sp, -0x70
    func_0012c3f0();  // 12c3f0                                // 0x001342e4: jal 0x12c3f0
    a0 = *(int32_t*)((s6) + 0xc);                               // 0x001342e8: lw $a0, 0xc($s6)
    v1 = 0x20 << 16;                                            // 0x001342ec: lui $v1, 0x20
    g_00201da8 = v0;  // Global at 0x00201da8                   // 0x001342f0: sw $v0, 0x1da8($v1)
    func_0012d468();  // 12d468                                // 0x001342f4: jal 0x12d468
    a0 = *(int32_t*)((s6) + 4);                                 // 0x001342f8: lw $a0, 4($s6)
    func_001261a0();  // 1261a0                                // 0x001342fc: jal 0x1261a0
    if (s7 <= 0) goto label_0x134358;                           // 0x00134304: blez $s7, 0x134358
    s5 = *(int32_t*)((s6) + 0x48);                              // 0x00134308: lw $s5, 0x48($s6)
    s1 = s6 + 0x18;                                             // 0x0013430c: addiu $s1, $s6, 0x18
label_0x134310:
    a0 = *(int32_t*)(s1);                                       // 0x00134310: lw $a0, 0($s1)
    s1 = s1 + 4;                                                // 0x00134314: addiu $s1, $s1, 4
    s0 = s4 << 3;                                               // 0x00134318: sll $s0, $s4, 3
    s4 = s4 + 1;                                                // 0x0013431c: addiu $s4, $s4, 1
    v1 = *(int32_t*)(a0);                                       // 0x00134320: lw $v1, 0($a0)
    a2 = s5 << 1;                                               // 0x00134324: sll $a2, $s5, 1
    a3 = sp + s0;                                               // 0x00134328: addu $a3, $sp, $s0
    v0 = g_00200018;  // Global at 0x00200018                   // 0x0013432c: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00134330: jalr $v0
    a0 = (s4 < s7) ? 1 : 0;                                     // 0x00134338: slt $a0, $s4, $s7
    v0 = sp + 4;                                                // 0x0013433c: addiu $v0, $sp, 4
    s0 = v0 + s0;                                               // 0x00134340: addu $s0, $v0, $s0
    v1 = *(int32_t*)(s0);                                       // 0x00134344: lw $v1, 0($s0)
    v1 = (unsigned)v1 >> 1;                                     // 0x00134348: srl $v1, $v1, 1
    v0 = ((unsigned)v1 < (unsigned)s5) ? 1 : 0;                 // 0x0013434c: sltu $v0, $v1, $s5
    if (a0 != 0) goto label_0x134310;                           // 0x00134350: bnez $a0, 0x134310
    if (v0 != 0) s5 = v1;                                       // 0x00134354: movn $s5, $v1, $v0
label_0x134358:
    if (s7 <= 0) goto label_0x1343ec;                           // 0x00134358: blez $s7, 0x1343ec
    fp = s5 << 1;                                               // 0x00134360: sll $fp, $s5, 1
    s3 = s6 + 0x18;                                             // 0x00134364: addiu $s3, $s6, 0x18
    v0 = sp + 0x10;                                             // 0x00134368: addiu $v0, $sp, 0x10
    /* nop */                                                   // 0x0013436c: nop 
label_0x134370:
    s0 = s4 << 3;                                               // 0x00134370: sll $s0, $s4, 3
    s1 = sp + s0;                                               // 0x00134374: addu $s1, $sp, $s0
    s2 = v0 + s0;                                               // 0x00134378: addu $s2, $v0, $s0
    func_001404a0();  // 1404a0                                // 0x00134388: jal 0x1404a0
    v0 = sp + 4;                                                // 0x00134394: addiu $v0, $sp, 4
    a0 = *(int32_t*)(s1);                                       // 0x00134398: lw $a0, 0($s1)
    s0 = v0 + s0;                                               // 0x0013439c: addu $s0, $v0, $s0
    s4 = s4 + 1;                                                // 0x001343a0: addiu $s4, $s4, 1
    func_00107c70();  // 107c70                                // 0x001343a4: jal 0x107c70
    a2 = *(int32_t*)(s0);                                       // 0x001343a8: lw $a2, 0($s0)
    a0 = *(int32_t*)(s3);                                       // 0x001343ac: lw $a0, 0($s3)
    v1 = *(int32_t*)(a0);                                       // 0x001343b4: lw $v1, 0($a0)
    v0 = g_00200020;  // Global at 0x00200020                   // 0x001343b8: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x001343bc: jalr $v0
    a1 = 1;                                                     // 0x001343c0: addiu $a1, $zero, 1
    a0 = *(int32_t*)(s3);                                       // 0x001343c4: lw $a0, 0($s3)
    v1 = *(int32_t*)(a0);                                       // 0x001343d0: lw $v1, 0($a0)
    v0 = g_0020001c;  // Global at 0x0020001c                   // 0x001343d4: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x001343d8: jalr $v0
    s3 = s3 + 4;                                                // 0x001343dc: addiu $s3, $s3, 4
    v1 = (s4 < s7) ? 1 : 0;                                     // 0x001343e0: slt $v1, $s4, $s7
    if (v1 != 0) goto label_0x134370;                           // 0x001343e4: bnez $v1, 0x134370
    v0 = sp + 0x10;                                             // 0x001343e8: addiu $v0, $sp, 0x10
label_0x1343ec:
    v0 = *(int32_t*)((s6) + 0xa8);                              // 0x001343ec: lw $v0, 0xa8($s6)
    v0 = v0 + s5;                                               // 0x001343f4: addu $v0, $v0, $s5
    func_001261b8();  // 1261b8                                // 0x001343f8: jal 0x1261b8
    *(uint32_t*)((s6) + 0xa8) = v0;                             // 0x001343fc: sw $v0, 0xa8($s6)
    if (s7 <= 0) goto label_0x13443c;                           // 0x00134400: blez $s7, 0x13443c
    /* nop */                                                   // 0x00134404: nop 
    s0 = s6 + 0x18;                                             // 0x0013440c: addiu $s0, $s6, 0x18
label_0x134410:
    a0 = *(int32_t*)(s0);                                       // 0x00134410: lw $a0, 0($s0)
    s0 = s0 + 4;                                                // 0x00134414: addiu $s0, $s0, 4
    a1 = 1;                                                     // 0x00134418: addiu $a1, $zero, 1
    v1 = *(int32_t*)(a0);                                       // 0x0013441c: lw $v1, 0($a0)
    v0 = g_00200024;  // Global at 0x00200024                   // 0x00134420: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00134424: jalr $v0
    s4 = s4 + -1;                                               // 0x00134428: addiu $s4, $s4, -1
    v0 = (unsigned)v0 >> 1;                                     // 0x0013442c: srl $v0, $v0, 1
    v1 = (v0 < s1) ? 1 : 0;                                     // 0x00134430: slt $v1, $v0, $s1
    if (s4 != 0) goto label_0x134410;                           // 0x00134434: bnez $s4, 0x134410
    if (v1 == 0) s1 = v0;                                       // 0x00134438: movz $s1, $v0, $v1
label_0x13443c:
    func_0012c3f0();  // 12c3f0                                // 0x0013443c: jal 0x12c3f0
    a0 = *(int32_t*)((s6) + 0xc);                               // 0x00134440: lw $a0, 0xc($s6)
    v1 = *(int32_t*)((s6) + 0xa8);                              // 0x00134444: lw $v1, 0xa8($s6)
    v0 = s1 + v0;                                               // 0x00134448: addu $v0, $s1, $v0
    v0 = v0 - v1;                                               // 0x0013444c: subu $v0, $v0, $v1
    if (v0 > 0) goto label_0x134488;                            // 0x00134450: bgtzl $v0, 0x134488
    a0 = *(int32_t*)((s6) + 0xc);                               // 0x00134458: lw $a0, 0xc($s6)
    func_0012c3a8();  // 12c3a8                                // 0x0013445c: jal 0x12c3a8
    a0 = *(int32_t*)((s6) + 0xc);                               // 0x00134464: lw $a0, 0xc($s6)
    func_0012c3c0();  // 12c3c0                                // 0x00134468: jal 0x12c3c0
    a0 = *(int32_t*)((s6) + 0xc);                               // 0x00134470: lw $a0, 0xc($s6)
    func_0013e918();  // 13e918                                // 0x00134474: jal 0x13e918
    a1 = 1;                                                     // 0x00134478: addiu $a1, $zero, 1
    v0 = 5;                                                     // 0x0013447c: addiu $v0, $zero, 5
    *(uint8_t*)((s6) + 1) = v0;                                 // 0x00134480: sb $v0, 1($s6)
label_0x134488:
    return;                                                     // 0x001344ac: jr $ra
    sp = sp + 0x70;                                             // 0x001344b0: addiu $sp, $sp, 0x70
}