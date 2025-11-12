void func_00145ec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00145ec0: addiu $sp, $sp, -0x20
    v1 = 1;                                                     // 0x00145ec4: addiu $v1, $zero, 1
    a1 = 1;                                                     // 0x00145ecc: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x100) = 0;                             // 0x00145ed8: sw $zero, 0x100($s0)
    v0 = *(int32_t*)((s0) + 0x868);                             // 0x00145edc: lw $v0, 0x868($s0)
    *(uint32_t*)((s0) + 0x86c) = v1;                            // 0x00145ee0: sw $v1, 0x86c($s0)
    v0 = v0 + 1;                                                // 0x00145ee4: addiu $v0, $v0, 1
    func_00145818();  // 0x1456a8                                // 0x00145ee8: jal 0x1456a8
    *(uint32_t*)((s0) + 0x864) = v0;                            // 0x00145eec: sw $v0, 0x864($s0)
    func_00145818();  // 0x1456a8                                // 0x00145ef4: jal 0x1456a8
    a1 = 5;                                                     // 0x00145ef8: addiu $a1, $zero, 5
    func_00145818();  // 0x1456a8                                // 0x00145f00: jal 0x1456a8
    a1 = 6;                                                     // 0x00145f04: addiu $a1, $zero, 6
    func_00145818();  // 0x1456a8                                // 0x00145f0c: jal 0x1456a8
    a1 = 1;                                                     // 0x00145f10: addiu $a1, $zero, 1
    func_00145818();  // 0x1456a8                                // 0x00145f18: jal 0x1456a8
    a1 = 6;                                                     // 0x00145f1c: addiu $a1, $zero, 6
    func_00145818();  // 0x1456a8                                // 0x00145f24: jal 0x1456a8
    a1 = 6;                                                     // 0x00145f28: addiu $a1, $zero, 6
    func_00145818();  // 0x1456a8                                // 0x00145f30: jal 0x1456a8
    a1 = 1;                                                     // 0x00145f34: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x1bc) = v0;                            // 0x00145f38: sw $v0, 0x1bc($s0)
    func_00145818();  // 0x1456a8                                // 0x00145f40: jal 0x1456a8
    a1 = 1;                                                     // 0x00145f44: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x1c0) = v0;                            // 0x00145f48: sw $v0, 0x1c0($s0)
    return func_00145c10();  // Tail call                        // 0x00145f58: j 0x145ae8
    sp = sp + 0x20;                                             // 0x00145f5c: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x00145f60: addiu $sp, $sp, -0x20
    a1 = 1;                                                     // 0x00145f64: addiu $a1, $zero, 1
    func_00145818();  // 0x1456a8                                // 0x00145f70: jal 0x1456a8
    if (v0 == 0) goto label_0x145f9c;                           // 0x00145f78: beqz $v0, 0x145f9c
    *(uint32_t*)((s0) + 0x858) = v0;                            // 0x00145f7c: sw $v0, 0x858($s0)
    func_00145080();  // 0x144f18                                // 0x00145f80: jal 0x144f18
    func_00144f18();  // 0x144ee8                                // 0x00145f8c: jal 0x144ee8
    a1 = 0x5000 << 16;                                          // 0x00145f90: lui $a1, 0x5000
    func_00145080();  // 0x144f18                                // 0x00145f94: jal 0x144f18
label_0x145f9c:
    func_00145818();  // 0x1456a8                                // 0x00145fa0: jal 0x1456a8
    a1 = 1;                                                     // 0x00145fa4: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x145fcc;                           // 0x00145fa8: beqz $v0, 0x145fcc
    *(uint32_t*)((s0) + 0x85c) = v0;                            // 0x00145fac: sw $v0, 0x85c($s0)
    func_00145080();  // 0x144f18                                // 0x00145fb0: jal 0x144f18
    func_00144f18();  // 0x144ee8                                // 0x00145fbc: jal 0x144ee8
    a1 = 0x5800 << 16;                                          // 0x00145fc0: lui $a1, 0x5800
    func_00145080();  // 0x144f18                                // 0x00145fc4: jal 0x144f18
label_0x145fcc:
    func_00145818();  // 0x1456a8                                // 0x00145fd0: jal 0x1456a8
    a1 = 1;                                                     // 0x00145fd4: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x145fec;                           // 0x00145fd8: beqz $v0, 0x145fec
    a1 = 0x22 << 16;                                            // 0x00145fdc: lui $a1, 0x22
    func_00148588();  // 0x148530                                // 0x00145fe4: jal 0x148530
    a1 = &str_002267a8;  // "load_chroma_non_intra_quantizer_matrix == 1" // 0x00145fe8: addiu $a1, $a1, 0x67a8
label_0x145fec:
    func_00145818();  // 0x1456a8                                // 0x00145ff0: jal 0x1456a8
    a1 = 1;                                                     // 0x00145ff4: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x146018;                           // 0x00145ff8: beqz $v0, 0x146018
    a1 = 0x22 << 16;                                            // 0x00146004: lui $a1, 0x22
    a1 = &str_002267d0;  // "odd number of field pictures"      // 0x00146008: addiu $a1, $a1, 0x67d0
    return func_00148588();  // Tail call                        // 0x00146010: j 0x148530
    sp = sp + 0x20;                                             // 0x00146014: addiu $sp, $sp, 0x20
label_0x146018:
    return;                                                     // 0x0014601c: jr $ra
    sp = sp + 0x20;                                             // 0x00146020: addiu $sp, $sp, 0x20
}