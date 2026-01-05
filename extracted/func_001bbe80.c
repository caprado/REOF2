void func_001bbe80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bbe80: addiu $sp, $sp, -0x10
    v1 = 1;                                                     // 0x001bbe84: addiu $v1, $zero, 1
    a1 = *(uint8_t*)((a0) + 8);                                 // 0x001bbe8c: lbu $a1, 8($a0)
    if (a1 == v1) goto label_0x1bbeb8;                          // 0x001bbe90: beq $a1, $v1, 0x1bbeb8
    /* nop */                                                   // 0x001bbe94: nop 
    if (a1 == 0) goto label_0x1bbea8;                           // 0x001bbe98: beqz $a1, 0x1bbea8
    /* nop */                                                   // 0x001bbe9c: nop 
    goto label_0x1bbec4;                                        // 0x001bbea0: b 0x1bbec4
label_0x1bbea8:
    func_001bbed0();  // 1bbed0                                // 0x001bbea8: jal 0x1bbed0
    /* nop */                                                   // 0x001bbeac: nop 
    goto label_0x1bbec0;                                        // 0x001bbeb0: b 0x1bbec0
    /* nop */                                                   // 0x001bbeb4: nop 
label_0x1bbeb8:
    thunk_func_001bc190();  // 1bc190                          // 0x001bbeb8: jal 0x1bc190
    /* nop */                                                   // 0x001bbebc: nop 
label_0x1bbec0:
label_0x1bbec4:
    return;                                                     // 0x001bbec4: jr $ra
    sp = sp + 0x10;                                             // 0x001bbec8: addiu $sp, $sp, 0x10
}