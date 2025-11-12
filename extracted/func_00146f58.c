void func_00146f58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x70;                                            // 0x00146f58: addiu $sp, $sp, -0x70
    v1 = 0x1000 << 16;                                          // 0x00146f5c: lui $v1, 0x1000
    v1 = v1 | 0x2010;                                           // 0x00146f64: ori $v1, $v1, 0x2010
    s1 = s3 << 6;                                               // 0x00146f7c: sll $s1, $s3, 6
label_0x146f88:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00146f88: lw $v0, 0($v1)
    /* nop */                                                   // 0x00146f8c: nop 
    /* nop */                                                   // 0x00146f90: nop 
    /* nop */                                                   // 0x00146f94: nop 
    /* nop */                                                   // 0x00146f98: nop 
    if (v0 < 0) goto label_0x146f88;                            // 0x00146f9c: bltz $v0, 0x146f88
    /* nop */                                                   // 0x00146fa0: nop 
    func_0011d378();  // 0x11d320                                // 0x00146fa4: jal 0x11d320
    /* nop */                                                   // 0x00146fa8: nop 
    v1 = 0xfff << 16;                                           // 0x00146fac: lui $v1, 0xfff
    a1 = 0x1000 << 16;                                          // 0x00146fb0: lui $a1, 0x1000
    v1 = v1 | 0xffff;                                           // 0x00146fb4: ori $v1, $v1, 0xffff
    a1 = a1 | 0xb010;                                           // 0x00146fb8: ori $a1, $a1, 0xb010
    v1 = s0 & v1;                                               // 0x00146fbc: and $v1, $s0, $v1
    a0 = 0x1000 << 16;                                          // 0x00146fc0: lui $a0, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00146fc4: sw $v1, 0($a1)
    a0 = a0 | 0xb020;                                           // 0x00146fc8: ori $a0, $a0, 0xb020
    g_10000000 = s1;  // Global at 0x10000000                   // 0x00146fcc: sw $s1, 0($a0)
    v1 = 0x1000 << 16;                                          // 0x00146fd0: lui $v1, 0x1000
    v1 = v1 | 0xb000;                                           // 0x00146fd4: ori $v1, $v1, 0xb000
    a0 = 0x100;                                                 // 0x00146fd8: addiu $a0, $zero, 0x100
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00146fdc: sw $a0, 0($v1)
    /* beqzl $v0, 0x146ff4 */                                   // 0x00146fe0: beqzl $v0, 0x146ff4
    a1 = 0x7000 << 16;                                          // 0x00146fe4: lui $a1, 0x7000
    func_0011d390();  // 0x11d378                                // 0x00146fe8: jal 0x11d378
    /* nop */                                                   // 0x00146fec: nop 
    a1 = 0x7000 << 16;                                          // 0x00146ff0: lui $a1, 0x7000
    func_00144f18();  // 0x144ee8                                // 0x00146ff8: jal 0x144ee8
    a1 = s3 | a1;                                               // 0x00146ffc: or $a1, $s3, $a1
    a0 = *(int32_t*)((s2) + 0x870);                             // 0x00147000: lw $a0, 0x870($s2)
    v0 = 4;                                                     // 0x00147004: addiu $v0, $zero, 4
    local_0 = v0;                                               // 0x00147008: sw $v0, 0($sp)
    func_00147ca0();  // 0x147c28                                // 0x0014700c: jal 0x147c28
    v1 = 0x1000 << 16;                                          // 0x00147014: lui $v1, 0x1000
    v1 = v1 | 0xb000;                                           // 0x00147018: ori $v1, $v1, 0xb000
    /* nop */                                                   // 0x0014701c: nop 
label_0x147020:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00147020: lw $v0, 0($v1)
    v0 = (unsigned)v0 >> 8;                                     // 0x00147024: srl $v0, $v0, 8
    v0 = v0 & 1;                                                // 0x00147028: andi $v0, $v0, 1
    /* nop */                                                   // 0x0014702c: nop 
    /* nop */                                                   // 0x00147030: nop 
    if (v0 != 0) goto label_0x147020;                           // 0x00147034: bnez $v0, 0x147020
    /* nop */                                                   // 0x00147038: nop 
    v1 = 0x1000 << 16;                                          // 0x0014703c: lui $v1, 0x1000
    v1 = v1 | 0x2010;                                           // 0x00147040: ori $v1, $v1, 0x2010
    /* nop */                                                   // 0x00147044: nop 
label_0x147048:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00147048: lw $v0, 0($v1)
    /* nop */                                                   // 0x0014704c: nop 
    /* nop */                                                   // 0x00147050: nop 
    /* nop */                                                   // 0x00147054: nop 
    /* nop */                                                   // 0x00147058: nop 
    if (v0 < 0) goto label_0x147048;                            // 0x0014705c: bltz $v0, 0x147048
    /* nop */                                                   // 0x00147060: nop 
    return;                                                     // 0x00147078: jr $ra
    sp = sp + 0x70;                                             // 0x0014707c: addiu $sp, $sp, 0x70
}