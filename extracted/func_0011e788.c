void func_0011e788() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011e788: addiu $sp, $sp, -0x30
    v0 = (unsigned)a0 >> 0xa;                                   // 0x0011e78c: srl $v0, $a0, 0xa
    s0 = v0 << 6;                                               // 0x0011e798: sll $s0, $v0, 6
    if (a0 < 0) goto label_0x11e7b4;                            // 0x0011e79c: bltz $a0, 0x11e7b4
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0011e7a4: lw $v1, 8($s0)
    v0 = a0 & 0x3ff;                                            // 0x0011e7a8: andi $v0, $a0, 0x3ff
    if (v0 == v1) goto label_0x11e7c0;                          // 0x0011e7ac: beql $v0, $v1, 0x11e7c0
    v0 = 0x1f << 16;                                            // 0x0011e7b0: lui $v0, 0x1f
label_0x11e7b4:
    v0 = 0x8000 << 16;                                          // 0x0011e7b4: lui $v0, 0x8000
    goto label_0x11e820;                                        // 0x0011e7b8: b 0x11e820
    v0 = v0 | 0x8002;                                           // 0x0011e7bc: ori $v0, $v0, 0x8002
label_0x11e7c0:
    v0 = v0 + 0x19e8;                                           // 0x0011e7c0: addiu $v0, $v0, 0x19e8
    v1 = g_80001a04;  // Global at 0x80001a04                   // 0x0011e7c4: lw $v1, 0x1c($v0)
    if (v1 != a0) goto label_0x11e7dc;                          // 0x0011e7c8: bnel $v1, $a0, 0x11e7dc
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x0011e7cc: lw $v0, 0xc($s0)
    v0 = 0x8000 << 16;                                          // 0x0011e7d0: lui $v0, 0x8000
    goto label_0x11e820;                                        // 0x0011e7d4: b 0x11e820
    v0 = v0 | 0x10;                                             // 0x0011e7d8: ori $v0, $v0, 0x10
label_0x11e7dc:
    v0 = v0 & 1;                                                // 0x0011e7dc: andi $v0, $v0, 1
    if (v0 != 0) goto label_0x11e820;                           // 0x0011e7e0: bnez $v0, 0x11e820
    v0 = 1;                                                     // 0x0011e7e4: addiu $v0, $zero, 1
    func_0011e460();  // 11e460                                // 0x0011e7e8: jal 0x11e460
    /* nop */                                                   // 0x0011e7ec: nop 
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x0011e7f4: lw $v0, 0xc($s0)
    v0 = v0 | 1;                                                // 0x0011e7fc: ori $v0, $v0, 1
    v1 = v0 & 2;                                                // 0x0011e800: andi $v1, $v0, 2
    if (v1 == 0) goto label_0x11e81c;                           // 0x0011e804: beqz $v1, 0x11e81c
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0011e808: sw $v0, 0xc($s0)
    func_0011e100();  // 11e100                                // 0x0011e80c: jal 0x11e100
    func_0011df70();  // 11df70                                // 0x0011e814: jal 0x11df70
label_0x11e81c:
label_0x11e820:
    return;                                                     // 0x0011e82c: jr $ra
    sp = sp + 0x30;                                             // 0x0011e830: addiu $sp, $sp, 0x30
}