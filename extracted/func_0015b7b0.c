void func_0015b7b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015b7b0: addiu $sp, $sp, -0x20
    if (s2 != 0) goto label_0x15b7f0;                           // 0x0015b7cc: bnez $s2, 0x15b7f0
    v1 = v1 ^ s1;                                               // 0x0015b7d4: xor $v1, $v1, $s1
    v0 = 0x7fff << 16;                                          // 0x0015b7d8: lui $v0, 0x7fff
    v1 = (v1 < 0) ? 1 : 0;                                      // 0x0015b7dc: slti $v1, $v1, 0
    a0 = 0x8000 << 16;                                          // 0x0015b7e0: lui $a0, 0x8000
    v0 = v0 | 0xffff;                                           // 0x0015b7e4: ori $v0, $v0, 0xffff
    goto label_0x15b848;                                        // 0x0015b7e8: b 0x15b848
    if (v1 != 0) v0 = a0;                                       // 0x0015b7ec: movn $v0, $a0, $v1
label_0x15b7f0:
    func_00111f90();  // 111f90                                // 0x0015b7f0: jal 0x111f90
    /* nop */                                                   // 0x0015b7f4: nop 
    func_00111f90();  // 111f90                                // 0x0015b7fc: jal 0x111f90
    func_00111a58();  // 111a58                                // 0x0015b808: jal 0x111a58
    func_00111f90();  // 111f90                                // 0x0015b814: jal 0x111f90
    func_00111ce0();  // 111ce0                                // 0x0015b820: jal 0x111ce0
    a1 = 0 | 0xff80;                                            // 0x0015b828: ori $a1, $zero, 0xff80
    func_00111998();  // 111998                                // 0x0015b830: jal 0x111998
    func_00121be8();  // 121be8                                // 0x0015b838: jal 0x121be8
    func_00112048();  // 112048                                // 0x0015b840: jal 0x112048
label_0x15b848:
    return;                                                     // 0x0015b858: jr $ra
    sp = sp + 0x20;                                             // 0x0015b85c: addiu $sp, $sp, 0x20
}