void func_0016b5e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016b5e8: addiu $sp, $sp, -0x10
    return func_00169940();  // Tail call                        // 0x0016b5f4: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016b5f8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016b5fc: nop 
    sp = sp + -0x10;                                            // 0x0016b600: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0x1aec);                            // 0x0016b610: lw $v0, 0x1aec($s0)
    func_0016b650();  // 16b650                                // 0x0016b614: jal 0x16b650
    a0 = *(int32_t*)(v0);                                       // 0x0016b618: lw $a0, 0($v0)
    a1 = 0xff00 << 16;                                          // 0x0016b61c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x16b640;                           // 0x0016b620: beqz $v0, 0x16b640
    a1 = a1 | 0xd0a;                                            // 0x0016b62c: ori $a1, $a1, 0xd0a
    return func_00169940();  // Tail call                        // 0x0016b634: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016b638: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016b63c: nop 
label_0x16b640:
    return;                                                     // 0x0016b648: jr $ra
    sp = sp + 0x10;                                             // 0x0016b64c: addiu $sp, $sp, 0x10
}