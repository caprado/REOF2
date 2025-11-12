void func_00191db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x7000 << 16;                                          // 0x00191db0: lui $at, 0x7000
    v1 = a1 << 6;                                               // 0x00191db4: sll $v1, $a1, 6
    at = at | 0x3700;                                           // 0x00191db8: ori $at, $at, 0x3700
    a2 = 8;                                                     // 0x00191dbc: addiu $a2, $zero, 8
    a3 = v1 + at;                                               // 0x00191dc0: addu $a3, $v1, $at
label_0x191dc4:
    a1 = *(int32_t*)(a3);                                       // 0x00191dc4: lw $a1, 0($a3)
    a2 = a2 + -1;                                               // 0x00191dc8: addiu $a2, $a2, -1
    v1 = *(int32_t*)((a3) + 4);                                 // 0x00191dcc: lw $v1, 4($a3)
    *(uint32_t*)(a0) = a1;                                      // 0x00191dd0: sw $a1, 0($a0)
    a3 = a3 + 8;                                                // 0x00191dd4: addiu $a3, $a3, 8
    *(uint32_t*)((a0) + 4) = v1;                                // 0x00191dd8: sw $v1, 4($a0)
    if (a2 > 0) goto label_0x191dc4;                            // 0x00191ddc: bgtz $a2, 0x191dc4
    a0 = a0 + 8;                                                // 0x00191de0: addiu $a0, $a0, 8
    return;                                                     // 0x00191de4: jr $ra
    /* nop */                                                   // 0x00191de8: nop 
}