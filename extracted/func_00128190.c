void func_00128190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = (a0 < 0) ? 1 : 0;                                      // 0x00128190: slti $v1, $a0, 0
    a1 = a0 + 0x7ff;                                            // 0x00128194: addiu $a1, $a0, 0x7ff
    if (v1 != 0) v0 = a1;                                       // 0x0012819c: movn $v0, $a1, $v1
    v0 = v0 >> 0xb;                                             // 0x001281a0: sra $v0, $v0, 0xb
    v1 = v0 << 0xb;                                             // 0x001281a4: sll $v1, $v0, 0xb
    a0 = a0 - v1;                                               // 0x001281a8: subu $a0, $a0, $v1
    a0 = (0 < a0) ? 1 : 0;                                      // 0x001281ac: slt $a0, $zero, $a0
    return;                                                     // 0x001281b0: jr $ra
    v0 = v0 + a0;                                               // 0x001281b4: addu $v0, $v0, $a0
}