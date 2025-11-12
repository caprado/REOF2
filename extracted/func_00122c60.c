void func_00122c60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0xb;                                                   // 0x00122c64: addiu $v1, $zero, 0xb
    v0 = *(uint8_t*)(a1);                                       // 0x00122c68: lbu $v0, 0($a1)
    if (v0 != v1) goto label_0x122c88;                          // 0x00122c6c: bnel $v0, $v1, 0x122c88
    v1 = *(uint8_t*)((a1) + 0x10);                              // 0x00122c70: lbu $v1, 0x10($a1)
    a0 = *(uint8_t*)((a1) + 1);                                 // 0x00122c74: lbu $a0, 1($a1)
    v1 = 0x77;                                                  // 0x00122c78: addiu $v1, $zero, 0x77
    if (a0 == v1) goto label_0x122ca8;                          // 0x00122c7c: beq $a0, $v1, 0x122ca8
    v0 = 1;                                                     // 0x00122c80: addiu $v0, $zero, 1
    v1 = *(uint8_t*)((a1) + 0x10);                              // 0x00122c84: lbu $v1, 0x10($a1)
label_0x122c88:
    v0 = 0xb;                                                   // 0x00122c88: addiu $v0, $zero, 0xb
    if (v1 != v0) goto label_0x122ca8;                          // 0x00122c8c: bne $v1, $v0, 0x122ca8
    a0 = *(uint8_t*)((a1) + 0x11);                              // 0x00122c94: lbu $a0, 0x11($a1)
    v1 = 0x77;                                                  // 0x00122c98: addiu $v1, $zero, 0x77
    if (a0 == v1) goto label_0x122ca8;                          // 0x00122c9c: beq $a0, $v1, 0x122ca8
    v0 = 1;                                                     // 0x00122ca0: addiu $v0, $zero, 1
label_0x122ca8:
    return;                                                     // 0x00122ca8: jr $ra
    /* nop */                                                   // 0x00122cac: nop 
}