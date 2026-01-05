void func_0013c250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x150;                                           // 0x0013c250: addiu $sp, $sp, -0x150
    v0 = 0x20 << 16;                                            // 0x0013c254: lui $v0, 0x20
    v1 = v0 + 0x4490;                                           // 0x0013c264: addiu $v1, $v0, 0x4490
    s3 = g_00204490;  // Global at 0x00204490                   // 0x0013c288: lw $s3, 0($v1)
    if (s3 == 0) goto label_0x13c384;                           // 0x0013c28c: beqz $s3, 0x13c384
    s4 = g_00204494;  // Global at 0x00204494                   // 0x0013c294: lw $s4, 4($v1)
    if (s4 == 0) goto label_0x13c358;                           // 0x0013c298: beqz $s4, 0x13c358
    fp = 0x20 << 16;                                            // 0x0013c2a4: lui $fp, 0x20
    s5 = 2;                                                     // 0x0013c2a8: addiu $s5, $zero, 2
label_0x13c2b0:
    v0 = *(int32_t*)((s6) + 0xc);                               // 0x0013c2b0: lw $v0, 0xc($s6)
    s0 = *(int32_t*)((s6) + 8);                                 // 0x0013c2b8: lw $s0, 8($s6)
    /* multiply: v0 * s2 -> hi:lo */                            // 0x0013c2bc: mult $ac3, $v0, $s2
    s0 = s0 << 3;                                               // 0x0013c2c0: sll $s0, $s0, 3
    v0 = v1 + s2;                                               // 0x0013c2c4: addu $v0, $v1, $s2
    s2 = s2 + 1;                                                // 0x0013c2c8: addiu $s2, $s2, 1
    s0 = s0 + v0;                                               // 0x0013c2cc: addu $s0, $s0, $v0
    s0 = s3 + s0;                                               // 0x0013c2d0: addu $s0, $s3, $s0
    func_0013bb40();  // 13bb40                                // 0x0013c2d4: jal 0x13bb40
    v0 = *(int8_t*)(s0);                                        // 0x0013c2dc: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x13c340;                           // 0x0013c2e0: beqz $v0, 0x13c340
    a0 = 0x6900;                                                // 0x0013c2e4: addiu $a0, $zero, 0x6900
    func_00137ec8();  // 137ec8                                // 0x0013c2e8: jal 0x137ec8
    /* nop */                                                   // 0x0013c2ec: nop 
    func_00138240();  // 138240                                // 0x0013c2f0: jal 0x138240
    a0 = *(int32_t*)(s1);                                       // 0x0013c2f4: lw $a0, 0($s1)
    a0 = 0x6901;                                                // 0x0013c2f8: addiu $a0, $zero, 0x6901
    func_00137ec8();  // 137ec8                                // 0x0013c2fc: jal 0x137ec8
    if (s0 >= 0) goto label_0x13c328;                           // 0x0013c304: bgez $s0, 0x13c328
    v0 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c308: lw $v0, 0x44a4($fp)
    if (v0 == s5) goto label_0x13c340;                          // 0x0013c30c: beq $v0, $s5, 0x13c340
    v0 = 0x22 << 16;                                            // 0x0013c310: lui $v0, 0x22
    func_00116508();  // 116508                                // 0x0013c318: jal 0x116508
    a0 = &str_00225a68;  // "HTCI: \\"                          // 0x0013c31c: addiu $a0, $v0, 0x5a68
    goto label_0x13c344;                                        // 0x0013c320: b 0x13c344
    v0 = ((unsigned)s2 < (unsigned)s4) ? 1 : 0;                 // 0x0013c324: sltu $v0, $s2, $s4
label_0x13c328:
    if (v0 == s5) goto label_0x13c340;                          // 0x0013c328: beq $v0, $s5, 0x13c340
    s7 = s7 + 1;                                                // 0x0013c32c: addiu $s7, $s7, 1
    v1 = 0x22 << 16;                                            // 0x0013c330: lui $v1, 0x22
    func_00116508();  // 116508                                // 0x0013c338: jal 0x116508
    a0 = &str_00225a90;  // "HTCI: Total %d files\n"            // 0x0013c33c: addiu $a0, $v1, 0x5a90
label_0x13c340:
    v0 = ((unsigned)s2 < (unsigned)s4) ? 1 : 0;                 // 0x0013c340: sltu $v0, $s2, $s4
label_0x13c344:
    if (v0 != 0) goto label_0x13c2b0;                           // 0x0013c344: bnez $v0, 0x13c2b0
    s1 = s1 + 8;                                                // 0x0013c348: addiu $s1, $s1, 8
    goto label_0x13c360;                                        // 0x0013c34c: b 0x13c360
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c350: lw $v1, 0x44a4($fp)
    /* nop */                                                   // 0x0013c354: nop 
label_0x13c358:
    fp = 0x20 << 16;                                            // 0x0013c358: lui $fp, 0x20
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c35c: lw $v1, 0x44a4($fp)
label_0x13c360:
    v0 = 2;                                                     // 0x0013c360: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x13c378;                          // 0x0013c364: beq $v1, $v0, 0x13c378
    a0 = 0x22 << 16;                                            // 0x0013c36c: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x0013c370: jal 0x116508
    a0 = &str_00225ab0;  // "HTCI: Invalidate filelist buffer pointer.\r\n" // 0x0013c374: addiu $a0, $a0, 0x5ab0
label_0x13c378:
    func_0013c480();  // 13c480                                // 0x0013c378: jal 0x13c480
    /* nop */                                                   // 0x0013c37c: nop 
    v0 = 1;                                                     // 0x0013c380: addiu $v0, $zero, 1
label_0x13c384:
    return;                                                     // 0x0013c3ac: jr $ra
    sp = sp + 0x150;                                            // 0x0013c3b0: addiu $sp, $sp, 0x150
}