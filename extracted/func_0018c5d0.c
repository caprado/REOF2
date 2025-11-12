void func_0018c5d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7000 << 16;                                          // 0x0018c5d0: lui $v1, 0x7000
    v0 = a2 & v1;                                               // 0x0018c5d8: and $v0, $a2, $v1
    if (v0 != v1) goto label_0x18c5ec;                          // 0x0018c5e0: bne $v0, $v1, 0x18c5ec
    t0 = 0x8000 << 16;                                          // 0x0018c5e8: lui $t0, 0x8000
label_0x18c5ec:
    a2 = 0x5000 << 16;                                          // 0x0018c5ec: lui $a2, 0x5000
    a1 = a1 + a2;                                               // 0x0018c5f4: addu $a1, $a1, $a2
    v1 = t1 | t0;                                               // 0x0018c5f8: or $v1, $t1, $t0
    *(uint32_t*)(a0) = a1;                                      // 0x0018c5fc: sw $a1, 0($a0)
    v0 = 1;                                                     // 0x0018c600: addiu $v0, $zero, 1
    if (a3 != v0) goto label_0x18c61c;                          // 0x0018c604: bne $a3, $v0, 0x18c61c
    *(uint32_t*)((a0) + 4) = v1;                                // 0x0018c608: sw $v1, 4($a0)
    v1 = *(int32_t*)(a0);                                       // 0x0018c60c: lw $v1, 0($a0)
    v0 = 0x8000 << 16;                                          // 0x0018c610: lui $v0, 0x8000
    v0 = v1 | v0;                                               // 0x0018c614: or $v0, $v1, $v0
    *(uint32_t*)(a0) = v0;                                      // 0x0018c618: sw $v0, 0($a0)
label_0x18c61c:
    return;                                                     // 0x0018c61c: jr $ra
    v0 = a0 + 0x10;                                             // 0x0018c620: addiu $v0, $a0, 0x10
}