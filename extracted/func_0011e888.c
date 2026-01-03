void func_0011e888() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011e888: addiu $sp, $sp, -0x30
    v0 = (unsigned)a0 >> 0xa;                                   // 0x0011e88c: srl $v0, $a0, 0xa
    s0 = v0 << 6;                                               // 0x0011e898: sll $s0, $v0, 6
    if (a0 < 0) goto label_0x11e8b4;                            // 0x0011e89c: bltz $a0, 0x11e8b4
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0011e8a4: lw $v1, 8($s0)
    v0 = a0 & 0x3ff;                                            // 0x0011e8a8: andi $v0, $a0, 0x3ff
    if (v0 == v1) goto label_0x11e8c0;                          // 0x0011e8ac: beql $v0, $v1, 0x11e8c0
    v0 = 0x1f << 16;                                            // 0x0011e8b0: lui $v0, 0x1f
label_0x11e8b4:
    v0 = 0x8000 << 16;                                          // 0x0011e8b4: lui $v0, 0x8000
    goto label_0x11e938;                                        // 0x0011e8b8: b 0x11e938
    v0 = v0 | 0x8002;                                           // 0x0011e8bc: ori $v0, $v0, 0x8002
label_0x11e8c0:
    v0 = v0 + 0x19e8;                                           // 0x0011e8c0: addiu $v0, $v0, 0x19e8
    v1 = g_80001a04;  // Global at 0x80001a04                   // 0x0011e8c4: lw $v1, 0x1c($v0)
    if (v1 != a0) goto label_0x11e8dc;                          // 0x0011e8c8: bnel $v1, $a0, 0x11e8dc
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x0011e8cc: lw $v0, 0xc($s0)
    v0 = 0x8000 << 16;                                          // 0x0011e8d0: lui $v0, 0x8000
    goto label_0x11e938;                                        // 0x0011e8d4: b 0x11e938
    v0 = v0 | 0x10;                                             // 0x0011e8d8: ori $v0, $v0, 0x10
label_0x11e8dc:
    v0 = v0 & 1;                                                // 0x0011e8dc: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x11e938;                           // 0x0011e8e0: beqz $v0, 0x11e938
    func_0011e460();  // 11e460                                // 0x0011e8e8: jal 0x11e460
    /* nop */                                                   // 0x0011e8ec: nop 
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x0011e8f0: lw $a1, 0xc($s0)
    v0 = 0xffff << 16;                                          // 0x0011e8fc: lui $v0, 0xffff
    v0 = v0 | 0xfffe;                                           // 0x0011e904: ori $v0, $v0, 0xfffe
    a2 = a1 & 2;                                                // 0x0011e90c: andi $a2, $a1, 2
    a1 = a1 & v0;                                               // 0x0011e914: and $a1, $a1, $v0
    if (a2 == 0) goto label_0x11e934;                           // 0x0011e91c: beqz $a2, 0x11e934
    *(uint32_t*)((s0) + 0xc) = a1;                              // 0x0011e920: sw $a1, 0xc($s0)
    func_0011e188();  // 11e188                                // 0x0011e924: jal 0x11e188
    func_0011df70();  // 11df70                                // 0x0011e92c: jal 0x11df70
label_0x11e934:
    v0 = 1;                                                     // 0x0011e934: addiu $v0, $zero, 1
label_0x11e938:
    return;                                                     // 0x0011e944: jr $ra
    sp = sp + 0x30;                                             // 0x0011e948: addiu $sp, $sp, 0x30
}