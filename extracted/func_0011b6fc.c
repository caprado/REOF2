void func_0011b6fc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x0011b6fc: addiu $sp, $sp, -0x30
    v1 = g_0024fe78;  // Global at 0x0024fe78                   // 0x0011b700: lw $v1, 0x3f8($v0)
    if (v1 >= 0) goto label_0x11b71c;                           // 0x0011b70c: bgez $v1, 0x11b71c
    goto label_0x11b7d8;                                        // 0x0011b714: b 0x11b7d8
label_0x11b71c:
    v0 = *(uint8_t*)(a2);                                       // 0x0011b71c: lbu $v0, 0($a2)
    a3 = 0x25 << 16;                                            // 0x0011b720: lui $a3, 0x25
    v1 = a3 + -0x580;                                           // 0x0011b724: addiu $v1, $a3, -0x580
    g_0024fa84 = v0;  // Global at 0x0024fa84                   // 0x0011b728: sb $v0, 4($v1)
    v0 = v0 << 0x18;                                            // 0x0011b72c: sll $v0, $v0, 0x18
    if (v0 == 0) goto label_0x11b778;                           // 0x0011b730: beqz $v0, 0x11b778
    t1 = 0x25 << 16;                                            // 0x0011b738: lui $t1, 0x25
    s0 = 0x25 << 16;                                            // 0x0011b73c: lui $s0, 0x25
    t0 = t0 + 1;                                                // 0x0011b740: addiu $t0, $t0, 1
    /* nop */                                                   // 0x0011b744: nop 
    v0 = (t0 < 0xfc) ? 1 : 0;                                   // 0x0011b748: slti $v0, $t0, 0xfc
    if (v0 == 0) goto label_0x11b780;                           // 0x0011b74c: beqz $v0, 0x11b780
    v0 = a2 + t0;                                               // 0x0011b750: addu $v0, $a2, $t0
    v1 = a3 + -0x580;                                           // 0x0011b754: addiu $v1, $a3, -0x580
    a0 = g_0024fa80;  // Global at 0x0024fa80                   // 0x0011b758: lbu $a0, 0($v0)
    v1 = v1 + t0;                                               // 0x0011b75c: addu $v1, $v1, $t0
    g_0024fa84 = a0;  // Global at 0x0024fa84                   // 0x0011b760: sb $a0, 4($v1)
    a0 = a0 << 0x18;                                            // 0x0011b764: sll $a0, $a0, 0x18
    /* bnezl $a0, 0x11b748 */                                   // 0x0011b768: bnezl $a0, 0x11b748
    t0 = t0 + 1;                                                // 0x0011b76c: addiu $t0, $t0, 1
    goto label_0x11b784;                                        // 0x0011b770: b 0x11b784
    v0 = 0xfc;                                                  // 0x0011b774: addiu $v0, $zero, 0xfc
label_0x11b778:
    t1 = 0x25 << 16;                                            // 0x0011b778: lui $t1, 0x25
    s0 = 0x25 << 16;                                            // 0x0011b77c: lui $s0, 0x25
label_0x11b780:
    v0 = 0xfc;                                                  // 0x0011b780: addiu $v0, $zero, 0xfc
label_0x11b784:
    if (t0 != v0) goto label_0x11b79c;                          // 0x0011b784: bnel $t0, $v0, 0x11b79c
    g_0024fa80 = a1;  // Global at 0x0024fa80                   // 0x0011b788: sw $a1, -0x580($a3)
    v0 = a3 + -0x580;                                           // 0x0011b78c: addiu $v0, $a3, -0x580
    t0 = 0xfb;                                                  // 0x0011b790: addiu $t0, $zero, 0xfb
    g_0024fb7f = 0;  // Global at 0x0024fb7f                    // 0x0011b794: sb $zero, 0xff($v0)
    g_0024fa80 = a1;  // Global at 0x0024fa80                   // 0x0011b798: sw $a1, -0x580($a3)
label_0x11b79c:
    v0 = a3 + -0x580;                                           // 0x0011b79c: addiu $v0, $a3, -0x580
    a0 = t1 + -0x640;                                           // 0x0011b7a0: addiu $a0, $t1, -0x640
    g_0024fb7f = 0;  // Global at 0x0024fb7f                    // 0x0011b7a4: sb $zero, 0xff($v0)
    t0 = t0 + 5;                                                // 0x0011b7ac: addiu $t0, $t0, 5
    local_0 = 0;                                                // 0x0011b7b0: sw $zero, 0($sp)
    a1 = 3;                                                     // 0x0011b7b4: addiu $a1, $zero, 3
    t1 = s0 + -0x600;                                           // 0x0011b7bc: addiu $t1, $s0, -0x600
    t2 = 4;                                                     // 0x0011b7c0: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011b7c4: jal 0x1176a8
    if (v0 >= 0) goto label_0x11b7d8;                           // 0x0011b7cc: bgez $v0, 0x11b7d8
    v0 = g_0024fa00;  // Global at 0x0024fa00                   // 0x0011b7d0: lw $v0, -0x600($s0)
    v0 = -1;                                                    // 0x0011b7d4: addiu $v0, $zero, -1
label_0x11b7d8:
    return;                                                     // 0x0011b7e0: jr $ra
    sp = sp + 0x30;                                             // 0x0011b7e4: addiu $sp, $sp, 0x30
}