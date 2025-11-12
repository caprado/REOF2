void func_00170190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x1b30);                            // 0x00170190: lw $v0, 0x1b30($a0)
    a0 = a0 + 0x14e0;                                           // 0x00170194: addiu $a0, $a0, 0x14e0
    a2 = v0 + 0x13c;                                            // 0x0017019c: addiu $a2, $v0, 0x13c
    v1 = a0 + 4;                                                // 0x001701a0: addiu $v1, $a0, 4
    /* nop */                                                   // 0x001701a4: nop 
label_0x1701a8:
    a0 = a0 + 0x5c;                                             // 0x001701a8: addiu $a0, $a0, 0x5c
    if (v1 == a1) goto label_0x1701d0;                          // 0x001701b0: beq $v1, $a1, 0x1701d0
    a2 = a2 + 0x80;                                             // 0x001701b4: addiu $a2, $a2, 0x80
    a3 = a3 + 1;                                                // 0x001701b8: addiu $a3, $a3, 1
    v0 = (a3 < 0x10) ? 1 : 0;                                   // 0x001701bc: slti $v0, $a3, 0x10
    /* nop */                                                   // 0x001701c0: nop 
    if (v0 != 0) goto label_0x1701a8;                           // 0x001701c4: bnez $v0, 0x1701a8
    v1 = a0 + 4;                                                // 0x001701c8: addiu $v1, $a0, 4
label_0x1701d0:
    return;                                                     // 0x001701d0: jr $ra
    /* nop */                                                   // 0x001701d4: nop 
}