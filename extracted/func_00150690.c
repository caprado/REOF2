void func_00150690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00150690: addiu $sp, $sp, -0x20
    s0 = a0 + 0x128;                                            // 0x00150698: addiu $s0, $a0, 0x128
    func_00155af8();  // 155af8                                // 0x001506ac: jal 0x155af8
    a1 = 0xff03 << 16;                                          // 0x001506b4: lui $a1, 0xff03
    if (v0 == 0) goto label_0x1506e0;                           // 0x001506bc: beqz $v0, 0x1506e0
    a1 = a1 | 0x20e;                                            // 0x001506c0: ori $a1, $a1, 0x20e
    return func_00150380();  // Tail call                        // 0x001506d4: j 0x150330
    sp = sp + 0x20;                                             // 0x001506d8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001506dc: nop 
label_0x1506e0:
    v0 = *(int32_t*)((s0) + 0xd0);                              // 0x001506e0: lw $v0, 0xd0($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x001506e8: sw $v0, 0($s1)
    v1 = *(int32_t*)((s0) + 0xd4);                              // 0x001506f0: lw $v1, 0xd4($s0)
    *(uint32_t*)(s2) = v1;                                      // 0x001506f8: sw $v1, 0($s2)
    return;                                                     // 0x00150700: jr $ra
    sp = sp + 0x20;                                             // 0x00150704: addiu $sp, $sp, 0x20
}