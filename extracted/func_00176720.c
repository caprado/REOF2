void func_00176720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t2 = *(int32_t*)((a1) + 8);                                 // 0x00176720: lw $t2, 8($a1)
    t3 = *(int32_t*)((a1) + 0xc);                               // 0x00176724: lw $t3, 0xc($a1)
    v0 = *(int32_t*)((a1) + 0x18);                              // 0x0017672c: lw $v0, 0x18($a1)
    t1 = *(int32_t*)((a1) + 0x14);                              // 0x00176730: lw $t1, 0x14($a1)
    t0 = *(int32_t*)((a1) + 0x10);                              // 0x00176738: lw $t0, 0x10($a1)
    t1 = t1 + v0;                                               // 0x0017673c: addu $t1, $t1, $v0
    v1 = t1 << 5;                                               // 0x00176740: sll $v1, $t1, 5
    v0 = t2 << 3;                                               // 0x00176744: sll $v0, $t2, 3
    v1 = v1 - t1;                                               // 0x0017674c: subu $v1, $v1, $t1
    v0 = v0 - t2;                                               // 0x00176750: subu $v0, $v0, $t2
    v1 = v1 << 2;                                               // 0x00176754: sll $v1, $v1, 2
    v0 = v0 << 5;                                               // 0x00176758: sll $v0, $v0, 5
    a1 = t3 << 4;                                               // 0x0017675c: sll $a1, $t3, 4
    v1 = v1 + t1;                                               // 0x00176760: addu $v1, $v1, $t1
    v0 = v0 + t2;                                               // 0x00176764: addu $v0, $v0, $t2
    a1 = a1 - t3;                                               // 0x00176768: subu $a1, $a1, $t3
    v1 = v1 << 3;                                               // 0x0017676c: sll $v1, $v1, 3
    v0 = v0 << 4;                                               // 0x00176770: sll $v0, $v0, 4
    a1 = a1 << 2;                                               // 0x00176774: sll $a1, $a1, 2
    t0 = t0 + v1;                                               // 0x00176778: addu $t0, $t0, $v1
    v0 = v0 + a1;                                               // 0x0017677c: addu $v0, $v0, $a1
    t0 = t0 + v0;                                               // 0x00176780: addu $t0, $t0, $v0
    *(uint32_t*)(a2) = t0;                                      // 0x00176784: sw $t0, 0($a2)
    return;                                                     // 0x00176788: jr $ra
    *(uint32_t*)(a3) = a0;                                      // 0x0017678c: sw $a0, 0($a3)
}