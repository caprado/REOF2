void func_00150d30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x48);                              // 0x00150d30: lw $v0, 0x48($a0)
    v1 = 1;                                                     // 0x00150d34: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x150d5c;                          // 0x00150d38: beq $v0, $v1, 0x150d5c
    v0 = 1;                                                     // 0x00150d3c: addiu $v0, $zero, 1
    v0 = *(int32_t*)((a0) + 0x118);                             // 0x00150d40: lw $v0, 0x118($a0)
    if (v0 == v1) goto label_0x150d5c;                          // 0x00150d44: beql $v0, $v1, 0x150d5c
    v0 = 1;                                                     // 0x00150d48: addiu $v0, $zero, 1
    a1 = 2;                                                     // 0x00150d4c: addiu $a1, $zero, 2
    if (v0 != a1) return;  // Branch to 0x150d68                // 0x00150d50: bnel $v0, $a1, 0x150d68
    v0 = *(int32_t*)((a0) + 0x134);                             // 0x00150d54: lw $v0, 0x134($a0)
    v0 = 1;                                                     // 0x00150d58: addiu $v0, $zero, 1
label_0x150d5c:
    return;                                                     // 0x00150d5c: jr $ra
    *(uint32_t*)((a0) + 0x38) = v0;                             // 0x00150d60: sw $v0, 0x38($a0)
}