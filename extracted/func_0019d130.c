void func_0019d130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x28 << 16;                                            // 0x0019d130: lui $v1, 0x28
    goto label_0x19d15c;                                        // 0x0019d138: b 0x19d15c
    v1 = v1 + 0x5480;                                           // 0x0019d13c: addiu $v1, $v1, 0x5480
label_0x19d140:
    v0 = v0 - a0;                                               // 0x0019d140: subu $v0, $v0, $a0
    v0 = v0 << 3;                                               // 0x0019d144: sll $v0, $v0, 3
    v0 = v1 + v0;                                               // 0x0019d148: addu $v0, $v1, $v0
    v0 = *(int8_t*)((v0) + 0x34);                               // 0x0019d14c: lb $v0, 0x34($v0)
    if (v0 == 0) goto label_0x19d16c;                           // 0x0019d150: beqz $v0, 0x19d16c
    v0 = a0 + 1;                                                // 0x0019d154: addiu $v0, $a0, 1
    a0 = a0 + 1;                                                // 0x0019d158: addiu $a0, $a0, 1
label_0x19d15c:
    v0 = (a0 < 0x100) ? 1 : 0;                                  // 0x0019d15c: slti $v0, $a0, 0x100
    if (v0 != 0) goto label_0x19d140;                           // 0x0019d160: bnez $v0, 0x19d140
    v0 = a0 << 3;                                               // 0x0019d164: sll $v0, $a0, 3
    v0 = a0 + 1;                                                // 0x0019d168: addiu $v0, $a0, 1
label_0x19d16c:
    return;                                                     // 0x0019d16c: jr $ra
    v0 = v0 << 0x10;                                            // 0x0019d170: sll $v0, $v0, 0x10
}