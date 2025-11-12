void func_00130eb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130eb0: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x130ef8;                           // 0x00130ed0: beqz $v0, 0x130ef8
    a3 = *(int32_t*)((v0) + 0xc);                               // 0x00130edc: lw $a3, 0xc($v0)
    t0 = *(int32_t*)((v0) + 4);                                 // 0x00130ee0: lw $t0, 4($v0)
    func_0013aa88();  // 0x13a920                                // 0x00130ee8: jal 0x13a920
    a2 = *(int32_t*)((v0) + 8);                                 // 0x00130eec: lw $a2, 8($v0)
    goto label_0x130f00;                                        // 0x00130ef0: b 0x130f00
label_0x130ef8:
    func_0013a920();  // 0x13a770                                // 0x00130ef8: jal 0x13a770
label_0x130f00:
    return;                                                     // 0x00130f0c: jr $ra
    sp = sp + 0x10;                                             // 0x00130f10: addiu $sp, $sp, 0x10
}