void func_0018c520() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7000 << 16;                                          // 0x0018c520: lui $v1, 0x7000
    v0 = a2 & v1;                                               // 0x0018c528: and $v0, $a2, $v1
    if (v0 != v1) goto label_0x18c53c;                          // 0x0018c530: bne $v0, $v1, 0x18c53c
    t0 = 0x8000 << 16;                                          // 0x0018c538: lui $t0, 0x8000
label_0x18c53c:
    a2 = 0x3000 << 16;                                          // 0x0018c53c: lui $a2, 0x3000
    a1 = a1 + a2;                                               // 0x0018c544: addu $a1, $a1, $a2
    v1 = t1 | t0;                                               // 0x0018c548: or $v1, $t1, $t0
    *(uint32_t*)(a0) = a1;                                      // 0x0018c54c: sw $a1, 0($a0)
    v0 = 1;                                                     // 0x0018c550: addiu $v0, $zero, 1
    if (a3 != v0) goto label_0x18c56c;                          // 0x0018c554: bne $a3, $v0, 0x18c56c
    *(uint32_t*)((a0) + 4) = v1;                                // 0x0018c558: sw $v1, 4($a0)
    v1 = *(int32_t*)(a0);                                       // 0x0018c55c: lw $v1, 0($a0)
    v0 = 0x8000 << 16;                                          // 0x0018c560: lui $v0, 0x8000
    v0 = v1 | v0;                                               // 0x0018c564: or $v0, $v1, $v0
    *(uint32_t*)(a0) = v0;                                      // 0x0018c568: sw $v0, 0($a0)
label_0x18c56c:
    return;                                                     // 0x0018c56c: jr $ra
    v0 = a0 + 0x10;                                             // 0x0018c570: addiu $v0, $a0, 0x10
}