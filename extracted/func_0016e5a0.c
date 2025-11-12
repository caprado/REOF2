void func_0016e5a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 2;                                                     // 0x0016e5a0: addiu $v0, $zero, 2
    if (a1 == v0) return;  // Branch to 0x16e5e0                // 0x0016e5a4: beq $a1, $v0, 0x16e5e0
    a0 = a0 + 0x9a0;                                            // 0x0016e5a8: addiu $a0, $a0, 0x9a0
    v0 = ((unsigned)a1 < (unsigned)3) ? 1 : 0;                  // 0x0016e5ac: sltiu $v0, $a1, 3
    if (v0 == 0) goto label_0x16e5d0;                           // 0x0016e5b0: beqz $v0, 0x16e5d0
    v0 = 3;                                                     // 0x0016e5b4: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x0016e5b8: addiu $v0, $zero, 1
    if (a1 == v0) return;  // Branch to 0x16e5e4                // 0x0016e5bc: beql $a1, $v0, 0x16e5e4
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0016e5c0: lw $v0, 8($a0)
    return;  // Branch to 0x16e5e8                              // 0x0016e5c4: b 0x16e5e8
    /* nop */                                                   // 0x0016e5c8: nop 
    /* nop */                                                   // 0x0016e5cc: nop 
label_0x16e5d0:
    if (a1 == v0) return;  // Branch to 0x16e5e4                // 0x0016e5d0: beql $a1, $v0, 0x16e5e4
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x0016e5d4: lw $v0, 0x10($a0)
    return;                                                     // 0x0016e5d8: jr $ra
    v0 = 1;                                                     // 0x0016e5dc: addiu $v0, $zero, 1
}