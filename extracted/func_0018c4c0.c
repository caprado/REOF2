void func_0018c4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7000 << 16;                                          // 0x0018c4c0: lui $v1, 0x7000
    v0 = a2 & v1;                                               // 0x0018c4c8: and $v0, $a2, $v1
    if (v0 != v1) goto label_0x18c4dc;                          // 0x0018c4d0: bne $v0, $v1, 0x18c4dc
    t0 = 0x8000 << 16;                                          // 0x0018c4d8: lui $t0, 0x8000
label_0x18c4dc:
    a2 = 0x2000 << 16;                                          // 0x0018c4dc: lui $a2, 0x2000
    a1 = a1 + a2;                                               // 0x0018c4e4: addu $a1, $a1, $a2
    v1 = t1 | t0;                                               // 0x0018c4e8: or $v1, $t1, $t0
    *(uint32_t*)(a0) = a1;                                      // 0x0018c4ec: sw $a1, 0($a0)
    v0 = 1;                                                     // 0x0018c4f0: addiu $v0, $zero, 1
    if (a3 != v0) goto label_0x18c50c;                          // 0x0018c4f4: bne $a3, $v0, 0x18c50c
    *(uint32_t*)((a0) + 4) = v1;                                // 0x0018c4f8: sw $v1, 4($a0)
    v1 = *(int32_t*)(a0);                                       // 0x0018c4fc: lw $v1, 0($a0)
    v0 = 0x8000 << 16;                                          // 0x0018c500: lui $v0, 0x8000
    v0 = v1 | v0;                                               // 0x0018c504: or $v0, $v1, $v0
    *(uint32_t*)(a0) = v0;                                      // 0x0018c508: sw $v0, 0($a0)
label_0x18c50c:
    return;                                                     // 0x0018c50c: jr $ra
    v0 = a0 + 0x10;                                             // 0x0018c510: addiu $v0, $a0, 0x10
}