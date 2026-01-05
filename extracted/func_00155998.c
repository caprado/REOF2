void func_00155998() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00155998: addiu $sp, $sp, -0x10
    func_00155af8();  // 155af8                                // 0x001559a4: jal 0x155af8
    a1 = 0xff03 << 16;                                          // 0x001559ac: lui $a1, 0xff03
    if (v0 == 0) goto label_0x1559d0;                           // 0x001559b4: beqz $v0, 0x1559d0
    a1 = a1 | 0x201;                                            // 0x001559b8: ori $a1, $a1, 0x201
    return func_00150380();  // Tail call                        // 0x001559c4: j 0x150330
    sp = sp + 0x10;                                             // 0x001559c8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001559cc: nop 
label_0x1559d0:
    v0 = 1;                                                     // 0x001559d0: addiu $v0, $zero, 1
    *(uint32_t*)(s0) = v0;                                      // 0x001559d8: sw $v0, 0($s0)
    return;                                                     // 0x001559e0: jr $ra
    sp = sp + 0x10;                                             // 0x001559e4: addiu $sp, $sp, 0x10
}