void func_00158228() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00158228: addiu $sp, $sp, -0x10
    func_00158088();  // 158088                                // 0x00158234: jal 0x158088
    a1 = 0xff02 << 16;                                          // 0x0015823c: lui $a1, 0xff02
    if (v0 == 0) goto label_0x158260;                           // 0x00158244: beqz $v0, 0x158260
    a1 = a1 | 0x103;                                            // 0x00158248: ori $a1, $a1, 0x103
    return func_00157f08();  // Tail call                        // 0x00158254: j 0x157eb8
    sp = sp + 0x10;                                             // 0x00158258: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015825c: nop 
label_0x158260:
    v1 = 1;                                                     // 0x00158260: addiu $v1, $zero, 1
    *(uint32_t*)(s0) = v1;                                      // 0x00158268: sw $v1, 0($s0)
    return;                                                     // 0x00158270: jr $ra
    sp = sp + 0x10;                                             // 0x00158274: addiu $sp, $sp, 0x10
}