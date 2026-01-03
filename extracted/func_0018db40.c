void func_0018db40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0018db40: addiu $sp, $sp, -0x20
    a0 = 8 << 16;                                               // 0x0018db50: lui $a0, 8
label_0x18db54:
    thunk_func_0018dab0();  // 18dab0                          // 0x0018db54: jal 0x18dab0
    a1 = 1;                                                     // 0x0018db58: addiu $a1, $zero, 1
    v1 = 0x29 << 16;                                            // 0x0018db5c: lui $v1, 0x29
    a0 = s0 << 2;                                               // 0x0018db60: sll $a0, $s0, 2
    v1 = v1 + -0x90;                                            // 0x0018db64: addiu $v1, $v1, -0x90
    s0 = s0 + 1;                                                // 0x0018db68: addiu $s0, $s0, 1
    v1 = v1 + a0;                                               // 0x0018db6c: addu $v1, $v1, $a0
    g_00290384 = v0;  // Global at 0x00290384                   // 0x0018db70: sw $v0, 0x414($v1)
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x0018db74: slti $v0, $s0, 2
    if (v0 != 0) goto label_0x18db54;                           // 0x0018db78: bnez $v0, 0x18db54
    a0 = 8 << 16;                                               // 0x0018db7c: lui $a0, 8
    func_0018dba0();  // 18dba0                                // 0x0018db80: jal 0x18dba0
    /* nop */                                                   // 0x0018db84: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018db8c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018db90: jr $ra
    sp = sp + 0x20;                                             // 0x0018db94: addiu $sp, $sp, 0x20
}