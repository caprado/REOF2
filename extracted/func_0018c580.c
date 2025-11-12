void func_0018c580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7000 << 16;                                          // 0x0018c580: lui $v1, 0x7000
    v0 = a2 & v1;                                               // 0x0018c588: and $v0, $a2, $v1
    if (v0 != v1) goto label_0x18c59c;                          // 0x0018c590: bne $v0, $v1, 0x18c59c
    t0 = 0x8000 << 16;                                          // 0x0018c598: lui $t0, 0x8000
label_0x18c59c:
    v1 = t1 | t0;                                               // 0x0018c5a0: or $v1, $t1, $t0
    *(uint32_t*)(a0) = a1;                                      // 0x0018c5a4: sw $a1, 0($a0)
    v0 = 1;                                                     // 0x0018c5a8: addiu $v0, $zero, 1
    if (a3 != v0) goto label_0x18c5c4;                          // 0x0018c5ac: bne $a3, $v0, 0x18c5c4
    *(uint32_t*)((a0) + 4) = v1;                                // 0x0018c5b0: sw $v1, 4($a0)
    v1 = *(int32_t*)(a0);                                       // 0x0018c5b4: lw $v1, 0($a0)
    v0 = 0x8000 << 16;                                          // 0x0018c5b8: lui $v0, 0x8000
    v0 = v1 | v0;                                               // 0x0018c5bc: or $v0, $v1, $v0
    *(uint32_t*)(a0) = v0;                                      // 0x0018c5c0: sw $v0, 0($a0)
label_0x18c5c4:
    return;                                                     // 0x0018c5c4: jr $ra
    v0 = a0 + 0x10;                                             // 0x0018c5c8: addiu $v0, $a0, 0x10
}