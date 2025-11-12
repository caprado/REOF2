void func_0018c490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x1000 << 16;                                          // 0x0018c490: lui $v1, 0x1000
    v1 = a1 + v1;                                               // 0x0018c498: addu $v1, $a1, $v1
    v0 = 1;                                                     // 0x0018c49c: addiu $v0, $zero, 1
    if (a2 != v0) goto label_0x18c4b8;                          // 0x0018c4a0: bne $a2, $v0, 0x18c4b8
    *(uint32_t*)(a0) = v1;                                      // 0x0018c4a4: sw $v1, 0($a0)
    v1 = *(int32_t*)(a0);                                       // 0x0018c4a8: lw $v1, 0($a0)
    v0 = 0x8000 << 16;                                          // 0x0018c4ac: lui $v0, 0x8000
    v0 = v1 | v0;                                               // 0x0018c4b0: or $v0, $v1, $v0
    *(uint32_t*)(a0) = v0;                                      // 0x0018c4b4: sw $v0, 0($a0)
label_0x18c4b8:
    return;                                                     // 0x0018c4b8: jr $ra
    v0 = a0 + 0x10;                                             // 0x0018c4bc: addiu $v0, $a0, 0x10
}