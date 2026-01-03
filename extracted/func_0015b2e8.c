void func_0015b2e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015b2e8: addiu $sp, $sp, -0x10
    func_0015b470();  // 15b470                                // 0x0015b2f4: jal 0x15b470
    a1 = 0xff03 << 16;                                          // 0x0015b2fc: lui $a1, 0xff03
    if (v0 == 0) goto label_0x15b320;                           // 0x0015b304: beqz $v0, 0x15b320
    a1 = a1 | 0x201;                                            // 0x0015b308: ori $a1, $a1, 0x201
    return func_00158c48();  // Tail call                        // 0x0015b318: j 0x158bf8
    sp = sp + 0x10;                                             // 0x0015b31c: addiu $sp, $sp, 0x10
label_0x15b320:
    func_0015b4f8();  // 15b4f8                                // 0x0015b320: jal 0x15b4f8
    /* nop */                                                   // 0x0015b324: nop 
    func_0015b358();  // 15b358                                // 0x0015b32c: jal 0x15b358
    a1 = 0x3c4;                                                 // 0x0015b330: addiu $a1, $zero, 0x3c4
    v0 = 1;                                                     // 0x0015b334: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x188) = v0;                            // 0x0015b338: sw $v0, 0x188($s0)
    return;                                                     // 0x0015b348: jr $ra
    sp = sp + 0x10;                                             // 0x0015b34c: addiu $sp, $sp, 0x10
}