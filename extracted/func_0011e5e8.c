void func_0011e5e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011e5e8: addiu $sp, $sp, -0x30
    v0 = (unsigned)a0 >> 0xa;                                   // 0x0011e5ec: srl $v0, $a0, 0xa
    s0 = v0 << 6;                                               // 0x0011e5f8: sll $s0, $v0, 6
    if (a0 < 0) goto label_0x11e614;                            // 0x0011e5fc: bltz $a0, 0x11e614
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0011e604: lw $v1, 8($s0)
    v0 = a0 & 0x3ff;                                            // 0x0011e608: andi $v0, $a0, 0x3ff
    if (v0 == v1) goto label_0x11e620;                          // 0x0011e60c: beql $v0, $v1, 0x11e620
    v0 = 0x1f << 16;                                            // 0x0011e610: lui $v0, 0x1f
label_0x11e614:
    v0 = 0x8000 << 16;                                          // 0x0011e614: lui $v0, 0x8000
    goto label_0x11e674;                                        // 0x0011e618: b 0x11e674
    v0 = v0 | 0x8002;                                           // 0x0011e61c: ori $v0, $v0, 0x8002
label_0x11e620:
    s1 = v0 + 0x19e8;                                           // 0x0011e620: addiu $s1, $v0, 0x19e8
    v1 = g_80001a04;  // Global at 0x80001a04                   // 0x0011e624: lw $v1, 0x1c($s1)
    if (v1 != a0) goto label_0x11e63c;                          // 0x0011e628: bnel $v1, $a0, 0x11e63c
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x0011e62c: lw $v0, 0xc($s0)
    v0 = 0x8000 << 16;                                          // 0x0011e630: lui $v0, 0x8000
    goto label_0x11e674;                                        // 0x0011e634: b 0x11e674
    v0 = v0 | 0x10;                                             // 0x0011e638: ori $v0, $v0, 0x10
label_0x11e63c:
    v0 = v0 & 2;                                                // 0x0011e63c: andi $v0, $v0, 2
    if (v0 == 0) goto label_0x11e650;                           // 0x0011e640: beqz $v0, 0x11e650
    /* nop */                                                   // 0x0011e644: nop 
    func_0011e188();  // 11e188                                // 0x0011e648: jal 0x11e188
label_0x11e650:
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0011e650: sw $zero, 8($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x0011e658: sw $zero, 0xc($s0)
    a0 = g_800019fc;  // Global at 0x800019fc                   // 0x0011e65c: lw $a0, 0x14($s1)
    v1 = g_800019f8;  // Global at 0x800019f8                   // 0x0011e660: lw $v1, 0x10($s1)
    *(uint32_t*)(s0) = a0;                                      // 0x0011e664: sw $a0, 0($s0)
    v1 = v1 + -1;                                               // 0x0011e668: addiu $v1, $v1, -1
    g_800019fc = s0;  // Global at 0x800019fc                   // 0x0011e66c: sw $s0, 0x14($s1)
    g_800019f8 = v1;  // Global at 0x800019f8                   // 0x0011e670: sw $v1, 0x10($s1)
label_0x11e674:
    return;                                                     // 0x0011e680: jr $ra
    sp = sp + 0x30;                                             // 0x0011e684: addiu $sp, $sp, 0x30
}