void func_00176f00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00176f00: addiu $sp, $sp, -0x10
    t0 = a0 + 0xcc0;                                            // 0x00176f04: addiu $t0, $a0, 0xcc0
    v0 = 0x21 << 16;                                            // 0x00176f14: lui $v0, 0x21
    v1 = *(int32_t*)((t0) + 0x288);                             // 0x00176f20: lw $v1, 0x288($t0)
    if (v1 >= 0) goto label_0x176f40;                           // 0x00176f24: bgez $v1, 0x176f40
    v0 = v0 + 0x5738;                                           // 0x00176f28: addiu $v0, $v0, 0x5738
    v0 = 1;                                                     // 0x00176f2c: addiu $v0, $zero, 1
    *(uint32_t*)((t0) + 0x288) = 0;                             // 0x00176f30: sw $zero, 0x288($t0)
    goto label_0x176f64;                                        // 0x00176f34: b 0x176f64
    *(uint32_t*)(s0) = v0;                                      // 0x00176f38: sw $v0, 0($s0)
    /* nop */                                                   // 0x00176f3c: nop 
label_0x176f40:
    a2 = *(int32_t*)((t0) + 0x288);                             // 0x00176f40: lw $a2, 0x288($t0)
    func_0014fea8();  // 14fea8                                // 0x00176f44: jal 0x14fea8
    a3 = g_00215740;  // Global at 0x00215740                   // 0x00176f48: lw $a3, 8($v0)
    if (v0 == 0) goto label_0x176f60;                           // 0x00176f4c: beqz $v0, 0x176f60
    v0 = 1;                                                     // 0x00176f50: addiu $v0, $zero, 1
    goto label_0x176f64;                                        // 0x00176f54: b 0x176f64
    *(uint32_t*)(s0) = v0;                                      // 0x00176f58: sw $v0, 0($s0)
    /* nop */                                                   // 0x00176f5c: nop 
label_0x176f60:
    *(uint32_t*)(s0) = 0;                                       // 0x00176f60: sw $zero, 0($s0)
label_0x176f64:
    return;                                                     // 0x00176f6c: jr $ra
    sp = sp + 0x10;                                             // 0x00176f70: addiu $sp, $sp, 0x10
}