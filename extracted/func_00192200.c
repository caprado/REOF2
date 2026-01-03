void func_00192200() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00192200: addiu $sp, $sp, -0x10
    func_0018db00();  // 18db00                                // 0x00192208: jal 0x18db00
    /* nop */                                                   // 0x0019220c: nop 
    *(uint32_t*)((gp) + -0x64dc) = v0;                          // 0x00192210: sw $v0, -0x64dc($gp)
    func_0018e210();  // 18e210                                // 0x00192214: jal 0x18e210
    a0 = *(int32_t*)((gp) + -0x64dc);                           // 0x00192218: lw $a0, -0x64dc($gp)
    return;                                                     // 0x00192220: jr $ra
    sp = sp + 0x10;                                             // 0x00192224: addiu $sp, $sp, 0x10
}