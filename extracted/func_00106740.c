void func_00106740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00106740: addiu $sp, $sp, -0x30
    s2 = a0 + 0x1d8;                                            // 0x00106748: addiu $s2, $a0, 0x1d8
    if (s2 == 0) goto label_0x1067b0;                           // 0x00106764: beqz $s2, 0x1067b0
    s0 = *(int32_t*)((s2) + 4);                                 // 0x0010676c: lw $s0, 4($s2)
    s0 = s0 + -1;                                               // 0x00106770: addiu $s0, $s0, -1
    if (s0 < 0) goto label_0x1067a4;                            // 0x00106774: bltz $s0, 0x1067a4
    s1 = *(int32_t*)((s2) + 8);                                 // 0x00106778: lw $s1, 8($s2)
    /* nop */                                                   // 0x0010677c: nop 
label_0x106780:
    v0 = *(int16_t*)((s1) + 0xc);                               // 0x00106780: lh $v0, 0xc($s1)
    /* beqzl $v0, 0x10679c */                                   // 0x00106784: beqzl $v0, 0x10679c
    s0 = s0 + -1;                                               // 0x00106788: addiu $s0, $s0, -1
    /* call function at address in s4 */                        // 0x0010678c: jalr $s4
    s3 = s3 | v0;                                               // 0x00106794: or $s3, $s3, $v0
    s0 = s0 + -1;                                               // 0x00106798: addiu $s0, $s0, -1
    if (s0 >= 0) goto label_0x106780;                           // 0x0010679c: bgez $s0, 0x106780
    s1 = s1 + 0x58;                                             // 0x001067a0: addiu $s1, $s1, 0x58
label_0x1067a4:
    s2 = *(int32_t*)(s2);                                       // 0x001067a4: lw $s2, 0($s2)
    /* bnezl $s2, 0x106770 */                                   // 0x001067a8: bnezl $s2, 0x106770
    s0 = *(int32_t*)((s2) + 4);                                 // 0x001067ac: lw $s0, 4($s2)
label_0x1067b0:
    return;                                                     // 0x001067cc: jr $ra
    sp = sp + 0x30;                                             // 0x001067d0: addiu $sp, $sp, 0x30
}