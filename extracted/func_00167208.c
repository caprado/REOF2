void func_00167208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x00167208: sll $v0, $a1, 3
    sp = sp + -0x30;                                            // 0x0016720c: addiu $sp, $sp, -0x30
    v0 = v0 - a1;                                               // 0x00167210: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167218: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00167220: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167228: sll $v0, $v0, 2
    v1 = a0 + v0;                                               // 0x00167230: addu $v1, $a0, $v0
    func_00169ba0();  // 0x169b88                                // 0x00167238: jal 0x169b88
    s0 = v1 + 0x1150;                                           // 0x0016723c: addiu $s0, $v1, 0x1150
    s1 = *(int32_t*)((s0) + 0x20);                              // 0x00167240: lw $s1, 0x20($s0)
    if (s1 != 0) goto label_0x167270;                           // 0x00167244: bnez $s1, 0x167270
    s2 = *(int32_t*)((s0) + 0x24);                              // 0x00167248: lw $s2, 0x24($s0)
    if (s2 == 0) goto label_0x167274;                           // 0x0016724c: beqz $s2, 0x167274
    v0 = 0x7fff << 16;                                          // 0x00167250: lui $v0, 0x7fff
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00167254: lw $v0, 4($s0)
    v1 = g_7fff0000;  // Global at 0x7fff0000                   // 0x00167258: lw $v1, 0($v0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00167260: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00167264: jalr $v0
    a1 = 1;                                                     // 0x00167268: addiu $a1, $zero, 1
    s1 = s2 + v0;                                               // 0x0016726c: addu $s1, $s2, $v0
label_0x167270:
    v0 = 0x7fff << 16;                                          // 0x00167270: lui $v0, 0x7fff
label_0x167274:
    v1 = (s1 < 0) ? 1 : 0;                                      // 0x00167274: slti $v1, $s1, 0
    v0 = v0 | 0xffff;                                           // 0x00167278: ori $v0, $v0, 0xffff
    func_00169bc8();  // 0x169ba0                                // 0x00167280: jal 0x169ba0
    if (v1 != 0) s1 = v0;                                       // 0x00167284: movn $s1, $v0, $v1
    return;                                                     // 0x0016729c: jr $ra
    sp = sp + 0x30;                                             // 0x001672a0: addiu $sp, $sp, 0x30
}