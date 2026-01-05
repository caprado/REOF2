void func_001300e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001300e0: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x130128;                           // 0x001300ec: beqz $s0, 0x130128
    func_00130408();  // 130408                                // 0x001300f4: jal 0x130408
    /* nop */                                                   // 0x001300f8: nop 
    func_00130220();  // 130220                                // 0x001300fc: jal 0x130220
    *(uint8_t*)(s0) = 0;                                        // 0x00130104: sb $zero, 0($s0)
    a2 = 0x5c;                                                  // 0x00130118: addiu $a2, $zero, 0x5c
    return func_00107d30();  // Tail call                        // 0x0013011c: j 0x107c70
    sp = sp + 0x10;                                             // 0x00130120: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00130124: nop 
label_0x130128:
    return;                                                     // 0x00130130: jr $ra
    sp = sp + 0x10;                                             // 0x00130134: addiu $sp, $sp, 0x10
}