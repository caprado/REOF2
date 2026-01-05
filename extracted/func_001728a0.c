void func_001728a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001728a0: addiu $sp, $sp, -0x10
    a2 = a1 + 0x9a0;                                            // 0x001728ac: addiu $a2, $a1, 0x9a0
    v0 = 1;                                                     // 0x001728b0: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a2) + 0x38);                              // 0x001728b4: lw $v1, 0x38($a2)
    if (v1 == 0) goto label_0x1728f8;                           // 0x001728b8: beqz $v1, 0x1728f8
    a1 = a1 + 0xcc0;                                            // 0x001728bc: addiu $a1, $a1, 0xcc0
    v1 = *(int32_t*)((a2) + 0x14);                              // 0x001728c0: lw $v1, 0x14($a2)
    /* beqzl $v1, 0x1728fc */                                   // 0x001728c4: beqzl $v1, 0x1728fc
    v1 = *(int32_t*)((a1) + 0x26c);                             // 0x001728cc: lw $v1, 0x26c($a1)
    /* bnezl $v1, 0x1728fc */                                   // 0x001728d0: bnezl $v1, 0x1728fc
    v1 = *(int32_t*)((a1) + 0x288);                             // 0x001728d8: lw $v1, 0x288($a1)
    a1 = *(int32_t*)((a2) + 0xb4);                              // 0x001728dc: lw $a1, 0xb4($a2)
    v1 = (v1 < a1) ? 1 : 0;                                     // 0x001728e0: slt $v1, $v1, $a1
    /* beqzl $v1, 0x1728fc */                                   // 0x001728e4: beqzl $v1, 0x1728fc
    func_00172ed0();  // 172ed0                                // 0x001728ec: jal 0x172ed0
    /* nop */                                                   // 0x001728f0: nop 
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001728f4: sltu $v0, $zero, $v0
label_0x1728f8:
    return;                                                     // 0x001728fc: jr $ra
    sp = sp + 0x10;                                             // 0x00172900: addiu $sp, $sp, 0x10
}