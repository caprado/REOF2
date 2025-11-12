void func_001a3480() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3480: addiu $sp, $sp, -0x10
    a1 = 7 << 16;                                               // 0x001a3484: lui $a1, 7
    func_001a32e0();  // 0x1a3230                                // 0x001a348c: jal 0x1a3230
    if (v0 != 0) goto label_0x1a34a4;                           // 0x001a3494: bnez $v0, 0x1a34a4
    /* nop */                                                   // 0x001a3498: nop 
    goto label_0x1a34a8;                                        // 0x001a349c: b 0x1a34a8
    v0 = -1;                                                    // 0x001a34a0: addiu $v0, $zero, -1
label_0x1a34a4:
    v0 = *(int32_t*)((v0) + 4);                                 // 0x001a34a4: lw $v0, 4($v0)
label_0x1a34a8:
    return;                                                     // 0x001a34ac: jr $ra
    sp = sp + 0x10;                                             // 0x001a34b0: addiu $sp, $sp, 0x10
}