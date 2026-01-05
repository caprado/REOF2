void func_0016fde0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016fde0: addiu $sp, $sp, -0x30
    func_0016feb0();  // 16feb0                                // 0x0016fe00: jal 0x16feb0
    s3 = *(int32_t*)((s1) + 0x1b30);                            // 0x0016fe04: lw $s3, 0x1b30($s1)
    v0 = 1;                                                     // 0x0016fe0c: addiu $v0, $zero, 1
    v1 = *(int32_t*)(s2);                                       // 0x0016fe10: lw $v1, 0($s2)
    if (v1 == v0) goto label_0x16fe48;                          // 0x0016fe18: beq $v1, $v0, 0x16fe48
    a1 = 0xff00 << 16;                                          // 0x0016fe20: lui $a1, 0xff00
    a1 = a1 | 0xf0e;                                            // 0x0016fe2c: ori $a1, $a1, 0xf0e
    return func_00169940();  // Tail call                        // 0x0016fe3c: j 0x1698d0
    sp = sp + 0x30;                                             // 0x0016fe40: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0016fe44: nop 
label_0x16fe48:
    func_00170190();  // 170190                                // 0x0016fe48: jal 0x170190
    /* nop */                                                   // 0x0016fe4c: nop 
    a1 = 0xff00 << 16;                                          // 0x0016fe50: lui $a1, 0xff00
    v1 = *(int32_t*)((s3) + 0x70);                              // 0x0016fe54: lw $v1, 0x70($s3)
    if (v1 == v0) goto label_0x16fe80;                          // 0x0016fe5c: beq $v1, $v0, 0x16fe80
    a1 = a1 | 0xf0f;                                            // 0x0016fe60: ori $a1, $a1, 0xf0f
    return func_00169940();  // Tail call                        // 0x0016fe78: j 0x1698d0
    sp = sp + 0x30;                                             // 0x0016fe7c: addiu $sp, $sp, 0x30
label_0x16fe80:
    *(uint32_t*)(s2) = 0;                                       // 0x0016fe80: sw $zero, 0($s2)
    func_001703d0();  // 1703d0                                // 0x0016fe84: jal 0x1703d0
    return;                                                     // 0x0016fea4: jr $ra
    sp = sp + 0x30;                                             // 0x0016fea8: addiu $sp, $sp, 0x30
}