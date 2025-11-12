void func_00146120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00146120: addiu $sp, $sp, -0x20
    a1 = 1;                                                     // 0x00146124: addiu $a1, $zero, 1
    func_00145818();  // 0x1456a8                                // 0x00146130: jal 0x1456a8
    func_00145818();  // 0x1456a8                                // 0x0014613c: jal 0x1456a8
    a1 = 8;                                                     // 0x00146140: addiu $a1, $zero, 8
    func_00145818();  // 0x1456a8                                // 0x00146148: jal 0x1456a8
    a1 = 1;                                                     // 0x0014614c: addiu $a1, $zero, 1
    func_00145818();  // 0x1456a8                                // 0x00146154: jal 0x1456a8
    a1 = 7;                                                     // 0x00146158: addiu $a1, $zero, 7
    func_00145818();  // 0x1456a8                                // 0x00146160: jal 0x1456a8
    a1 = 1;                                                     // 0x00146164: addiu $a1, $zero, 1
    func_00145818();  // 0x1456a8                                // 0x0014616c: jal 0x1456a8
    a1 = 0x14;                                                  // 0x00146170: addiu $a1, $zero, 0x14
    func_00145818();  // 0x1456a8                                // 0x00146178: jal 0x1456a8
    a1 = 1;                                                     // 0x0014617c: addiu $a1, $zero, 1
    func_00145818();  // 0x1456a8                                // 0x00146184: jal 0x1456a8
    a1 = 0x16;                                                  // 0x00146188: addiu $a1, $zero, 0x16
    func_00145818();  // 0x1456a8                                // 0x00146190: jal 0x1456a8
    a1 = 1;                                                     // 0x00146194: addiu $a1, $zero, 1
    a1 = 0x16;                                                  // 0x001461a4: addiu $a1, $zero, 0x16
    return func_00145818();  // Tail call                        // 0x001461a8: j 0x1456a8
    sp = sp + 0x20;                                             // 0x001461ac: addiu $sp, $sp, 0x20
    sp = sp + -0x30;                                            // 0x001461b0: addiu $sp, $sp, -0x30
    v0 = 3;                                                     // 0x001461b4: addiu $v0, $zero, 3
    v1 = *(int32_t*)((s0) + 0x18c);                             // 0x001461c8: lw $v1, 0x18c($s0)
    if (v1 != v0) goto label_0x1461f8;                          // 0x001461cc: bne $v1, $v0, 0x1461f8
    v0 = 2;                                                     // 0x001461d0: addiu $v0, $zero, 2
    v0 = *(int32_t*)((s0) + 0x138);                             // 0x001461d4: lw $v0, 0x138($s0)
    if (v0 == 0) goto label_0x1461f8;                           // 0x001461d8: beqz $v0, 0x1461f8
    v0 = 2;                                                     // 0x001461dc: addiu $v0, $zero, 2
    a1 = 0x22 << 16;                                            // 0x001461e0: lui $a1, 0x22
    func_00148588();  // 0x148530                                // 0x001461e4: jal 0x148530
    a1 = &str_00226800;  // "unknown picture sutructure"        // 0x001461e8: addiu $a1, $a1, 0x6800
    *(uint32_t*)((s0) + 0x138) = 0;                             // 0x001461ec: sw $zero, 0x138($s0)
    v1 = *(int32_t*)((s0) + 0x18c);                             // 0x001461f0: lw $v1, 0x18c($s0)
    v0 = 2;                                                     // 0x001461f4: addiu $v0, $zero, 2
label_0x1461f8:
    if (v1 == v0) goto label_0x146234;                          // 0x001461f8: beq $v1, $v0, 0x146234
    v0 = (v1 < 3) ? 1 : 0;                                      // 0x001461fc: slti $v0, $v1, 3
    if (v0 == 0) goto label_0x146218;                           // 0x00146200: beqz $v0, 0x146218
    v0 = 1;                                                     // 0x00146204: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x14622c;                          // 0x00146208: beq $v1, $v0, 0x14622c
    a1 = 0x22 << 16;                                            // 0x0014620c: lui $a1, 0x22
    goto label_0x146240;                                        // 0x00146210: b 0x146240
    s1 = *(int32_t*)((s0) + 0x1d8);                             // 0x00146214: lw $s1, 0x1d8($s0)
label_0x146218:
    v0 = 3;                                                     // 0x00146218: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x14623c;                          // 0x0014621c: bne $v1, $v0, 0x14623c
    a1 = 0x22 << 16;                                            // 0x00146220: lui $a1, 0x22
    goto label_0x14624c;                                        // 0x00146224: b 0x14624c
    s1 = *(int32_t*)((s0) + 0x1d8);                             // 0x00146228: lw $s1, 0x1d8($s0)
label_0x14622c:
    goto label_0x14624c;                                        // 0x0014622c: b 0x14624c
    s1 = *(int32_t*)((s0) + 0x1e8);                             // 0x00146230: lw $s1, 0x1e8($s0)
label_0x146234:
    goto label_0x14624c;                                        // 0x00146234: b 0x14624c
    s1 = *(int32_t*)((s0) + 0x1f8);                             // 0x00146238: lw $s1, 0x1f8($s0)
label_0x14623c:
    s1 = *(int32_t*)((s0) + 0x1d8);                             // 0x0014623c: lw $s1, 0x1d8($s0)
label_0x146240:
    a1 = &str_00226820;  // "Too small buffer size for %dx%d picture\n" // 0x00146240: addiu $a1, $a1, 0x6820
    func_00148588();  // 0x148530                                // 0x00146244: jal 0x148530
label_0x14624c:
    func_001442d8();  // 0x1441c0                                // 0x0014624c: jal 0x1441c0
    if (v1 == 0) goto label_0x146264;                           // 0x00146258: beqz $v1, 0x146264
    v0 = 1;                                                     // 0x0014625c: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 0x28) = v0;                             // 0x00146260: sw $v0, 0x28($s1)
label_0x146264:
    return;                                                     // 0x00146274: jr $ra
    sp = sp + 0x30;                                             // 0x00146278: addiu $sp, $sp, 0x30
}