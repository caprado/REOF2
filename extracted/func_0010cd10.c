void func_0010cd10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010cd10: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0010cd20: lw $v0, 8($s0)
    if (v0 != 0) goto label_0x10cd38;                           // 0x0010cd24: bnez $v0, 0x10cd38
    goto label_0x10cd48;                                        // 0x0010cd2c: b 0x10cd48
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0010cd30: sw $zero, 4($s0)
    /* nop */                                                   // 0x0010cd34: nop 
label_0x10cd38:
    func_00106360();  // 106360                                // 0x0010cd38: jal 0x106360
    /* nop */                                                   // 0x0010cd3c: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0010cd40: sw $zero, 4($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0010cd44: sw $zero, 8($s0)
label_0x10cd48:
    return;                                                     // 0x0010cd50: jr $ra
    sp = sp + 0x10;                                             // 0x0010cd54: addiu $sp, $sp, 0x10
}