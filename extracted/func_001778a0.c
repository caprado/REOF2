void func_001778a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 4;                                               // 0x001778a0: sll $v0, $a1, 4
    sp = sp + -0x10;                                            // 0x001778a4: addiu $sp, $sp, -0x10
    v0 = v0 + a1;                                               // 0x001778a8: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001778b0: sll $v0, $v0, 2
    v1 = a0 + v0;                                               // 0x001778b8: addu $v1, $a0, $v0
    t1 = *(int32_t*)((v1) + 0x1aac);                            // 0x001778c0: lw $t1, 0x1aac($v1)
    a2 = a2 << 2;                                               // 0x001778c4: sll $a2, $a2, 2
    v1 = a2 + t1;                                               // 0x001778cc: addu $v1, $a2, $t1
    if (t1 == 0) goto label_0x1778e4;                           // 0x001778d0: beqz $t1, 0x1778e4
    v0 = *(int32_t*)(v1);                                       // 0x001778d8: lw $v0, 0($v1)
    /* call function at address in v0 */                        // 0x001778dc: jalr $v0
    /* nop */                                                   // 0x001778e0: nop 
label_0x1778e4:
    return;                                                     // 0x001778e8: jr $ra
    sp = sp + 0x10;                                             // 0x001778ec: addiu $sp, $sp, 0x10
}